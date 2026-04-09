// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_tRNS
// Entry Point: 00dc9cf0
// Size: 436 bytes
// Signature: undefined png_write_tRNS(void)


void png_write_tRNS(long param_1,undefined8 param_2,long param_3,uint param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  ushort local_30;
  undefined local_2e;
  undefined local_2d;
  undefined local_2c;
  undefined local_2b;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  if (param_5 == 0) {
    uVar1 = *(ushort *)(param_3 + 8);
    if ((int)(uint)uVar1 < 1 << (ulong)(*(byte *)(param_1 + 0x2a0) & 0x1f)) {
      local_30 = uVar1 >> 8 | (ushort)((uVar1 & 0xff00ff) << 8);
      FUN_00dc8238(param_1,0x74524e53,&local_30,2);
      if (*(long *)(lVar4 + 0x28) == local_28) {
        return;
      }
    }
    else {
      png_app_warning(param_1,"Ignoring attempt to write tRNS chunk out-of-range for bit_depth");
      if (*(long *)(lVar4 + 0x28) == local_28) {
        return;
      }
    }
  }
  else if (param_5 == 2) {
    uVar1 = *(ushort *)(param_3 + 2);
    uVar2 = *(ushort *)(param_3 + 4);
    uVar3 = *(ushort *)(param_3 + 6);
    local_2d = (undefined)uVar2;
    local_30 = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
    local_2e = (undefined)(uVar2 >> 8);
    local_2c = (undefined)(uVar3 >> 8);
    local_2b = (undefined)uVar3;
    if ((*(char *)(param_1 + 0x2a0) == '\b') && ((ushort)(uVar2 | uVar1 | uVar3) >> 8 != 0)) {
      png_app_warning(param_1,"Ignoring attempt to write 16-bit tRNS chunk when bit_depth is 8");
      if (*(long *)(lVar4 + 0x28) == local_28) {
        return;
      }
    }
    else {
      FUN_00dc8238(param_1,0x74524e53,&local_30,6);
      if (*(long *)(lVar4 + 0x28) == local_28) {
        return;
      }
    }
  }
  else if (param_5 == 3) {
    if (((int)param_4 < 1) || (*(ushort *)(param_1 + 0x290) < param_4)) {
      png_app_warning(param_1,"Invalid number of transparent colors specified");
      if (*(long *)(lVar4 + 0x28) == local_28) {
        return;
      }
    }
    else {
      FUN_00dc8238(param_1,0x74524e53,param_2,param_4);
      if (*(long *)(lVar4 + 0x28) == local_28) {
        return;
      }
    }
  }
  else {
    png_app_warning(param_1,"Can\'t write tRNS with an alpha channel");
    if (*(long *)(lVar4 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


