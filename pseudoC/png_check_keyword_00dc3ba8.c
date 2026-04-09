// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_check_keyword
// Entry Point: 00dc3ba8
// Size: 424 bytes
// Signature: undefined png_check_keyword(void)


int png_check_keyword(undefined8 param_1,byte *param_2,undefined *param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  undefined auStack_148 [256];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (param_2 == (byte *)0x0) {
    iVar10 = 0;
    *param_3 = 0;
  }
  else {
    uVar8 = (uint)*param_2;
    if (*param_2 == 0) {
      uVar6 = 0;
      uVar5 = 0;
      bVar4 = true;
      pbVar9 = param_2;
    }
    else {
      uVar5 = 0;
      uVar6 = 0;
      bVar4 = true;
      pbVar7 = param_2;
      do {
        if ((uVar8 < 0xa1) && (0x5d < uVar8 - 0x21)) {
          if (bVar4) {
            bVar4 = true;
            if (uVar5 != 0) {
              uVar8 = uVar5;
            }
            bVar2 = pbVar7[1];
            uVar5 = uVar8;
          }
          else {
            uVar6 = uVar6 + 1;
            if (uVar8 != 0x20) {
              uVar5 = uVar8;
            }
            bVar4 = true;
            *param_3 = 0x20;
            bVar2 = pbVar7[1];
            param_3 = param_3 + 1;
          }
        }
        else {
          bVar4 = false;
          uVar6 = uVar6 + 1;
          *param_3 = (char)uVar8;
          bVar2 = pbVar7[1];
          param_3 = param_3 + 1;
        }
        uVar8 = (uint)bVar2;
        pbVar9 = pbVar7 + 1;
      } while ((uVar8 != 0) && (pbVar7 = pbVar7 + 1, pbVar9 = pbVar7, uVar6 < 0x4f));
    }
    uVar8 = (uint)(uVar6 != 0 && bVar4);
    iVar10 = uVar6 - uVar8;
    uVar1 = 0x20;
    if ((uVar6 == 0 || !bVar4) || uVar5 != 0) {
      uVar1 = uVar5;
    }
    param_3[-(ulong)uVar8] = 0;
    if (iVar10 != 0) {
      if (*pbVar9 == 0) {
        if (uVar1 != 0) {
          png_warning_parameter(auStack_148,1,param_2);
          png_warning_parameter_signed(auStack_148,2,4,uVar1);
          png_formatted_warning(param_1,auStack_148,"keyword \"@1\": bad character \'0x@2\'");
        }
      }
      else {
        png_warning(param_1,"keyword truncated");
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


