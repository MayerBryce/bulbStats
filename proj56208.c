/* Project #5
   EGRE245 Spring 2019
   B. Mayer */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	int testBatch, batchNum, compNum, numBulbs, arr[1000], x, y, z;
	float mean, arrb[1000], devSum, standardDeviation, stanDev, sum;
	printf("Project #5 - B. Mayer\n");
	// Find the # of test bacthes
	scanf("%d", &testBatch);
	for(x = 0; x < testBatch; x++){
		compNum = 1;
		
	// Find the batch number
		scanf("%d", &batchNum);
		if(batchNum == 0){
			break;
		}
		
	// Box formatting
		else if((batchNum >= 1)&&(batchNum <= 9)){
			printf("+---------------+\n");
			printf("| Test Batch #%d |\n", batchNum);
			printf("+---------------+\n");
		}
		else if((batchNum >= 10)&&(batchNum <= 99)){
			printf("+----------------+\n");
			printf("| Test Batch #%d |\n", batchNum);
			printf("+----------------+\n");
		}
		else if((batchNum >= 100)&&(batchNum <= 999)){
			printf("+-----------------+\n");
			printf("| Test Batch #%d |\n", batchNum);
			printf("+-----------------+\n");
		}
		else if((batchNum >= 1000)&&(batchNum <= 9999)){
			printf("+------------------+\n");
			printf("| Test Batch #%d |\n", batchNum);
			printf("+------------------+\n");
		}
		else if((batchNum >= 10000)&&(batchNum <= 99999)){
			printf("+-------------------+\n");
			printf("| Test Batch #%d |\n", batchNum);
			printf("+-------------------+\n");
		}
		printf("Company   Mean  Std Dev\n");
		printf("------- ------- -------\n");
		
	// Scan in company number
		while(compNum >= 0){
			scanf("%d", &compNum);
			if(compNum == 0){
				break;
			}
			printf("%7d ", compNum);
			
	// Scan in light bulb data
			for(y = 0; y < 15; y++){								
				scanf("%d", &arr[y]);					
				if(arr[y] == 0){
				mean = sum / numBulbs;							
				z = 0;
				while(z < numBulbs){
					arrb[z] = (arr[z] = ((arr[z] - mean) * (arr[z] - mean)));
					devSum += arrb[z];
					z++;
					}
				standardDeviation = sqrt(devSum / (numBulbs - 1));
				printf("%7.2f ", mean);
				printf("%7.3f\n", standardDeviation);
				mean = 0;
				numBulbs = 0;
				devSum = 0;
				standardDeviation = 0;
				sum = 0;
				break;
				}
				if(numBulbs == 10){
				while(arr[y] != 0){
					scanf("%d", &arr[y]);
					}
				mean = sum / numBulbs;
				z = 0;
				while(z < numBulbs){
					arrb[z] = ((arr[z] - mean) * (arr[z] - mean));
					devSum += arrb[z];
					z++;
					}
					standardDeviation = sqrt(devSum / (numBulbs - 1));
					printf("%7.2f ", mean);
					printf("%7.3f\n", standardDeviation);
					mean = 0;
					numBulbs = 0;
					devSum = 0;
					standardDeviation = 0;
					sum = 0;
					break;
				}
				sum += arr[y];
				numBulbs++;
			}
		}
		printf("\n");
}
return 0;
}