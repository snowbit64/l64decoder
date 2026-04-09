// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_user_version_check
// Entry Point: 00da8ad4
// Size: 500 bytes
// Signature: undefined png_user_version_check(void)


void png_user_version_check(long param_1,char *param_2)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined auStack_b8 [128];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_2 == (char *)0x0) {
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 0x20000;
  }
  else {
    cVar1 = *param_2;
    if (cVar1 != '1') {
      *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 0x20000;
    }
    bVar3 = cVar1 == '.';
    if (cVar1 != '\0') {
      cVar1 = param_2[1];
      if (cVar1 == '.') {
        bVar3 = bVar3 + 1;
      }
      else {
        *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 0x20000;
      }
      if ((bVar3 < 2) && (cVar1 != '\0')) {
        cVar1 = param_2[2];
        if (cVar1 != '6') {
          *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 0x20000;
        }
        if (cVar1 == '.') {
          bVar3 = bVar3 + 1;
        }
        if ((bVar3 < 2) && (cVar1 != '\0')) {
          cVar1 = param_2[3];
          if (cVar1 == '.') {
            bVar3 = bVar3 + 1;
          }
          else {
            *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 0x20000;
          }
          if ((bVar3 < 2) && (cVar1 != '\0')) {
            cVar1 = param_2[4];
            if (cVar1 != '3') {
              *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 0x20000;
            }
            if (cVar1 == '.') {
              bVar3 = bVar3 + 1;
            }
            if ((bVar3 < 2) && (cVar1 != '\0')) {
              cVar1 = param_2[5];
              if (cVar1 != '7') {
                *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 0x20000;
              }
              if (cVar1 == '.') {
                bVar3 = bVar3 + 1;
              }
              if (((bVar3 < 2) && (cVar1 != '\0')) && (param_2[6] != '\0')) {
                *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 0x20000;
              }
            }
          }
        }
      }
    }
    if ((*(uint *)(param_1 + 0x168) >> 0x11 & 1) == 0) {
      uVar4 = 1;
      goto LAB_00da8ca0;
    }
  }
  uVar4 = png_safecat(auStack_b8,0x80,0,"Application built with libpng-");
  uVar4 = png_safecat(auStack_b8,0x80,uVar4,param_2);
  uVar4 = png_safecat(auStack_b8,0x80,uVar4," but running with ");
  png_safecat(auStack_b8,0x80,uVar4,"1.6.37");
  png_warning(param_1,auStack_b8);
  uVar4 = 0;
LAB_00da8ca0:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


