class Solution {
public:
    unordered_map<string, string> codeDb, urlDb;
    const string chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    
    string getCode(){
        string code = "";
        for (int i = 0; i < 6; i++) code += chars[rand() % 62];
        return "http://tinyurl.com/" + code;
    }

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        if(urlDb.find(longUrl) != urlDb.end()) return urlDb[longUrl];
        string code = getCode();
        if(codeDb.find(code) != codeDb.end()) code = getCode();
        codeDb[code] = longUrl;
        urlDb[longUrl] = code;
        return code;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return codeDb[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
