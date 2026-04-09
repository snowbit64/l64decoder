// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_sBIT
// Entry Point: 00dc9b08
// Size: 284 bytes
// Signature: undefined png_write_sBIT(void)


void png_write_sBIT(long param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  byte local_2c;
  byte local_2b;
  byte local_2a;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  if ((param_3 >> 1 & 1) == 0) {
    bVar6 = param_2[3];
    if ((bVar6 != 0) && (bVar6 <= *(byte *)(param_1 + 0x2a1))) {
      uVar5 = 1;
      local_2c = bVar6;
joined_r0x00dc9ba8:
      if ((param_3 >> 2 & 1) != 0) {
        bVar6 = param_2[4];
        if ((bVar6 == 0) || (*(byte *)(param_1 + 0x2a1) < bVar6)) goto LAB_00dc9bc0;
        *(byte *)((ulong)&local_2c | uVar5) = bVar6;
        uVar5 = uVar5 + 1;
      }
      FUN_00dc8238(param_1,0x73424954,&local_2c,uVar5);
      if (*(long *)(lVar4 + 0x28) == local_28) {
        return;
      }
      goto LAB_00dc9c20;
    }
  }
  else {
    if (param_3 == 3) {
      bVar6 = 8;
      bVar1 = *param_2;
    }
    else {
      bVar6 = *(byte *)(param_1 + 0x2a1);
      bVar1 = *param_2;
    }
    if (((((bVar1 != 0) && (bVar1 <= bVar6)) && (bVar2 = param_2[1], bVar2 != 0)) &&
        ((bVar2 <= bVar6 && (bVar3 = param_2[2], bVar3 != 0)))) && (bVar3 <= bVar6)) {
      uVar5 = 3;
      local_2b = bVar2;
      local_2a = bVar3;
      local_2c = bVar1;
      goto joined_r0x00dc9ba8;
    }
  }
LAB_00dc9bc0:
  png_warning(param_1,"Invalid sBIT depth specified");
  if (*(long *)(lVar4 + 0x28) == local_28) {
    return;
  }
LAB_00dc9c20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


