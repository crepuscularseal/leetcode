//It is implemented with the depth search algorithm DFS.
//Starting from the initial data point, look at the surrounding four adjacent points (up, down, left, and right)
//Confirm whether the color of these four points is the color to be changed

void flooder(int** image, int m, int n, int sr, int sc, int newcolor,int oldcolor)
{
    if(sr<0||sr>=m||sc<0||sc>=n)  return;
    if(image[sr][sc] == oldcolor)
    {
        image[sr][sc] = newcolor;
        flooder(image,m,n,sr+1,sc,newcolor,oldcolor);
        flooder(image,m,n,sr,sc+1,newcolor,oldcolor);
        flooder(image,m,n,sr-1,sc,newcolor,oldcolor);
        flooder(image,m,n,sr,sc-1,newcolor,oldcolor);
    }
    return;
}

int** floodFill(int** image, int imageSize, int* imageColSize, int sr, int sc, int newcolor, int* returnSize, int** returnColumnSizes){
    int oldcolor = image[sr][sc];

    int m = imageSize; //row 
    int n = *imageColSize;//col 

    if(oldcolor!=newcolor)
    {
        flooder(image,m,n,sr,sc,newcolor,oldcolor);
    }
   
    *returnSize = imageSize;
    *returnColumnSizes = imageColSize; 
    
    return image;
}