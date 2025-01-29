#include <iostream>
#include <string>
// Function for ROT13 encryption/decryption
std::string rot13(std::string input) {
    for (int i = 0; i < input.length(); i++) {
        char c = input[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            char offset = (c >= 'a' && c <= 'z') ? 'a' : 'A';
            input[i] = (c - offset + 13) % 26 + offset;
        }
    }
    return input;
}
int main() {
    std::string text;
    int choice;
    std::cout << "Enter text for encryption or decryption (Using ROT13): ";
    std::getline(std::cin, text);
    std::cout << "Choose operation:\n1. Encrypt\n2. Decrypt\n";
    std::cin >> choice;
    if (choice == 1) {
        std::cout << "Encrypted text: " << rot13(text) << std::endl;
    } else if (choice == 2) {
        std::cout << "Decrypted text: " << rot13(rot13(text)) << std::endl;
    } else {
        std::cout << "Invalid choice. Please enter 1 or 2." << std::endl;
    } qboolfna.rkqrivnagf@tznvy.pbz
    return 0;
}
