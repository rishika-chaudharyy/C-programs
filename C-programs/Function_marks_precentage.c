//Write a function to input marks and find the percentage of marks

#include <stdio.h>

// Function to calculate percentage
float calculatePercentage(float marks, float totalMarks) {
    return (marks / totalMarks) * 100;
}

int main() {
    float mathMarks, scienceMarks, englishMarks;
    float mathTotalMarks = 100.0; // Assuming maximum marks for each subject is 100
    float scienceTotalMarks = 100.0;
    float englishTotalMarks = 100.0;

    printf("Enter marks in Math: ");
    scanf("%f", &mathMarks);

    printf("Enter marks in Science: ");
    scanf("%f", &scienceMarks);

    printf("Enter marks in English: ");
    scanf("%f", &englishMarks);

    float mathPercentage = calculatePercentage(mathMarks, mathTotalMarks);
    float sciencePercentage = calculatePercentage(scienceMarks, scienceTotalMarks);
    float englishPercentage = calculatePercentage(englishMarks, englishTotalMarks);

    printf("Math Percentage: %.2f%%\n", mathPercentage);
    printf("Science Percentage: %.2f%%\n", sciencePercentage);
    printf("English Percentage: %.2f%%\n", englishPercentage);

    return 0;
}
