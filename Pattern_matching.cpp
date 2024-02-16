int pattern_match_index(const string& text, const string& pattern) {
	int size_t = text.size(), size_p = pattern.size(); 
	int index = -1; 
	for (int i = 0; i <= size_t - size_p && index == -1; i++) {
		bool found = true; 
		for (int j = 0; j < size_p && found; j++) {
			if (text[i + j] != pattern[j]) {
				found = false; 
			}
		} 
		if (found) {
			index = i; 
		}
	}  
	return index; 
} 
