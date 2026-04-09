// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: uncompress2
// Entry Point: 00e2ff90
// Size: 428 bytes
// Signature: undefined uncompress2(void)


int uncompress2(undefined *param_1,ulong *param_2,undefined8 param_3,ulong *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_d0;
  uint local_c8;
  undefined *local_b8;
  uint local_b0;
  ulong local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined auStack_5c [4];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar5 = *param_2;
  uVar6 = *param_4;
  if (uVar5 == 0) {
    param_1 = auStack_5c;
    uVar5 = 1;
  }
  else {
    *param_2 = 0;
  }
  local_c8 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_d0 = param_3;
  iVar4 = inflateInit_(&local_d0,"1.2.11",0x70);
  puVar3 = param_1;
  if (iVar4 == 0) {
LAB_00e3006c:
    local_b8 = puVar3;
    uVar1 = uVar5;
    if (0xfffffffe < uVar5) {
      uVar1 = 0xffffffff;
    }
    uVar5 = uVar5 - uVar1;
    local_b0 = (uint)uVar1;
    if (local_c8 != 0) goto LAB_00e30058;
    do {
      uVar1 = uVar6;
      if (0xfffffffe < uVar6) {
        uVar1 = 0xffffffff;
      }
      uVar6 = uVar6 - uVar1;
      local_c8 = (uint)uVar1;
      iVar4 = inflate(&local_d0,0);
      while( true ) {
        if (iVar4 != 0) {
          *param_4 = *param_4 - (uVar6 + local_c8);
          if (param_1 == auStack_5c) {
            if (iVar4 == -5 && local_a8 != 0) {
              uVar5 = 1;
            }
            inflateEnd(&local_d0);
          }
          else {
            *param_2 = local_a8;
            inflateEnd(&local_d0);
          }
          if (iVar4 != 2) {
            if (iVar4 == 1) {
              iVar4 = 0;
              goto LAB_00e3000c;
            }
            if ((iVar4 != -5) || (uVar5 + local_b0 == 0)) goto LAB_00e3000c;
          }
          iVar4 = -3;
          goto LAB_00e3000c;
        }
        puVar3 = local_b8;
        if (local_b0 == 0) goto LAB_00e3006c;
        if (local_c8 == 0) break;
LAB_00e30058:
        iVar4 = inflate(&local_d0,0);
      }
    } while( true );
  }
LAB_00e3000c:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}


