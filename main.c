#include <stdio.h>
int main() {
    FILE *in;
    in = fopen("input.txt","r");
    int nr,nc,dim,max = 0,min;
    if (in == NULL){
        return 0;
    }
    fscanf(in,"%d",&nr);
    fscanf(in,"%d",&nc);
    min = nr;
    if(min > nc){
        min = nc;
    }
    int M[nr][nc];
    printf("please insert your dim:\n");
    scanf("%d",&dim);
    if(dim < 1 || dim > min){
        printf("wrong input");
        return 0;
    }
    int s[dim][dim],ma[dim][dim];
    while(!feof(in)){
        for(int i = 0; i < nr; i++){
            for (int j = 0; j < nc; j++) {
                fscanf(in,"%d",&M[i][j]);
            }
        }
    }
    fclose(in);
    printf("The square sub matrices of dimension %d are:\n",dim);
    int b = 0;
    int dim_j = dim;
    int dim_i = dim;
    while (b <= nr - dim) {
        int a = 0;
        while (a <= nc - dim) {
            int y = 0;
            for (int i = b; i < dim_i; ++i) {
                int z = 0;
                for (int j = a; j < dim_j; ++j) {
                    s[y][z] = M[i][j];
                    z++;
                }y++;
            }
            for (int k = 0; k < dim; ++k) {
                for (int l = 0; l < dim; ++l) {
                    printf("%d ",s[k][l]);
                }
                printf("\n");
            }
            int sum = 0;
            for (int k = 0; k < dim; ++k) {
                for (int l = 0; l < dim; ++l) {
                    sum = sum + s[k][l];

                }
            }
            if (max < sum){
                max = sum;
                for (int k = 0; k < dim; ++k) {
                    for (int l = 0; l < dim; ++l) {
                        ma[k][l]=s[k][l];
                    }
                }
            }
            a++;
            dim_j++;
            printf("\n\n");
        }
        b++;
        dim_i++;
    }
    printf("The sub_matrix with maximum sum of elements (%d) is:\n",max);
    for (int k = 0; k < dim; ++k) {
        for (int l = 0; l < dim; ++l) {
            printf("%d ",ma[k][l]);
        }
        printf("\n");
    }
    return 0;
}
