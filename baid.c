#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
void insert(int *x, int y)
{
    //Function realization
    return;
}

void delete(int y, int *x)
{
    //Function realization
    return;
}

void show(int x, int z)
{
    //Function realization
    return;
}

void inorder(int x)
{
    //Function realization
    return;
}

void preorder(int x)
{
    //Function realization
    return;
}

void postorder(int x)
{
    //Function realization
    return;
}

int main(int argc, char* argv[],char* envp[])
{
  int result = 0;
	int choice = 0;
	int dbg = 0;
	int data = 0;
	int *unit;

	dbg = IsDebuggerPresent();
	if ( IsDebuggerPresent() )
    {
        result = 0;
    }
    else
    {
        unit = malloc(4);
        *unit = 0;
        show_tree(0,0);
        if ( !IsDebuggerPresent() )
        {
            do
            {
            printf("\nWhat do you want to do?\n");
            printf("1.Insert\n");
            printf("2.Delete\n");
            printf("3.Show\n");
            printf("4.Inorder\n");
            printf("5.Preorder\n");
            printf("6.Postorder\n");
            printf("7.Exit\n");
            printf("Enter your choice:\n");
            scanf("%d", &choice);
            switch (choice)
                {
                case 1:
                    printf("\nEnter The Data for Insterting:");
                    scanf("%d", &data);
                    printf("\nInserting!\n\n");
                    instert(unit, data);
                    break;
                case 2:
                    printf("\nEnter The Data for Deleting:");
                    scanf("%d", &data);
                    delete(data, unit);
                    break;
                case 3:
                    show_tree(*unit, 0);
                    break;
                case 4:
                    printf("\n");
                    inorder(*unit);
                    printf("\n");
                    break;
                case 5:
                    printf("\n");
                    preorder(*unit);
                    printf("\n");
                    break;
                case 6:
                    printf("\n");
                    postorder(*unit);
                    printf("\n");
                    break;
                case 7:
                    printf("\nExiting......");
                    exit(1);
                    return result;
                default:
                    printf("Please Enter a valid number!!\n");
                    break;
                }
            }
            while(!dbg);
		}
        result = 0;
	}
	return result;
}

