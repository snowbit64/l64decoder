// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_format_number
// Entry Point: 00dae7bc
// Size: 328 bytes
// Signature: undefined png_format_number(void)


char * png_format_number(char *param_1,long param_2,int param_3,ulong param_4)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  pcVar2 = (char *)(param_2 + -1);
  *pcVar2 = '\0';
  if (param_1 < pcVar2) {
    bVar1 = false;
    iVar3 = 0;
    iVar5 = 1;
    do {
      if ((param_4 == 0) && (iVar5 <= iVar3)) {
        return pcVar2;
      }
      switch(param_3) {
      case 2:
        iVar5 = 2;
      case 1:
        pcVar2[-1] = "0123456789ABCDEF"[param_4 % 10];
        param_4 = param_4 / 10;
        break;
      case 4:
        iVar5 = 2;
      case 3:
        pcVar2[-1] = "0123456789ABCDEF"[param_4 & 0xf];
        param_4 = param_4 >> 4;
        break;
      case 5:
        if ((bVar1) || (param_4 % 10 != 0)) {
          bVar1 = true;
          pcVar2 = pcVar2 + -1;
          *pcVar2 = "0123456789ABCDEF"[param_4 % 10];
          iVar5 = 5;
          param_4 = param_4 / 10;
        }
        else {
          bVar1 = false;
          iVar5 = 5;
          param_4 = param_4 / 10;
        }
        goto joined_r0x00dae8c4;
      default:
        param_4 = 0;
joined_r0x00dae8c4:
        iVar4 = iVar3 + 1;
        if (((param_3 == 5) && (iVar4 = iVar3 + 1, iVar4 == 5)) && (param_1 < pcVar2)) {
          if (bVar1) {
            pcVar2 = pcVar2 + -1;
            *pcVar2 = '.';
            iVar4 = 5;
          }
          else {
            iVar4 = 5;
            bVar1 = false;
            if (param_4 == 0) {
              pcVar2 = pcVar2 + -1;
              *pcVar2 = '0';
              bVar1 = false;
            }
          }
        }
        goto LAB_00dae81c;
      }
      pcVar2 = pcVar2 + -1;
      iVar4 = iVar3 + 1;
LAB_00dae81c:
      iVar3 = iVar4;
    } while (param_1 < pcVar2);
  }
  return pcVar2;
}


