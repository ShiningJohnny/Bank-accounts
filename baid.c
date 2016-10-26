int __cdecl main(int argc, const char **argv, const char **envp)
{
  BOOL (__stdcall *v3)(); // esi@1
  int result; // eax@2
  int *v5; // edi@3
  int v6; // ebx@4
  int v7; // esi@11
  int v8; // [sp+4h] [bp-8h]@4
  int v9; // [sp+8h] [bp-4h]@6

  v3 = IsDebuggerPresent;
  if ( IsDebuggerPresent() )
  {
    result = 0;
  }
  else
  {
    v5 = malloc(4u);
    *v5 = 0;
    sub_401020(0, 0);
    puts(byte_40C980);
    if ( !IsDebuggerPresent() )
    {
      v6 = v8;
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
        printf("Enter your choice:");
        scanf("%d", &v8);
        switch ( v8 )
        {
          case 1:
            printf("\nEnter The Data for Inserting:");
            scanf("%d", &v9);
            printf("\nInserting!\n\n");
            sub_401490(v5, v9);
            break;
          case 2:
            printf("\nEnter The Data for Deleting:");
            scanf("%d", &v9);
            sub_401730(v9, v5);
            break;
          case 3:
            sub_401020(*v5, 0);
            puts(byte_40C980);
            break;
          case 4:
            printf("\n");
            sub_401110(*v5);
            printf("\n");
            break;
          case 5:
            printf("\n");
            sub_4010C0(*v5);
            printf("\n");
            break;
          case 6:
            printf("\n");
            v7 = *v5;
            if ( v6 )
            {
              if ( v7 )
              {
                sub_401160(*(v7 + 4));
                sub_401160(*(v7 + 8));
                printf("%d -> ", *v7);
              }
            }
            else
            {
              printf("Is empty");
            }
            printf("\n");
            v3 = IsDebuggerPresent;
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
      while ( !v3() );
    }
    result = 0;
  }
  return result;
}
