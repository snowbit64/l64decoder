// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_bKGD
// Entry Point: 00dc9ea4
// Size: 408 bytes
// Signature: undefined png_write_bKGD(void)


void png_write_bKGD(long param_1,byte *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  byte bVar5;
  undefined2 local_30;
  undefined local_2e;
  undefined local_2d;
  undefined local_2c;
  undefined local_2b;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  if (param_3 == 3) {
    if ((*(ushort *)(param_1 + 0x290) == 0) && ((*(byte *)(param_1 + 0x418) & 1) != 0)) {
      bVar5 = *param_2;
    }
    else {
      bVar5 = *param_2;
      if (*(ushort *)(param_1 + 0x290) <= (ushort)bVar5) {
        png_warning(param_1,"Invalid background palette index");
        if (*(long *)(lVar4 + 0x28) == local_28) {
          return;
        }
        goto LAB_00dc9ffc;
      }
    }
    local_30 = CONCAT11(local_30._1_1_,bVar5);
    FUN_00dc8238(param_1,0x624b4744,&local_30,1);
    if (*(long *)(lVar4 + 0x28) == local_28) {
      return;
    }
  }
  else if ((param_3 >> 1 & 1) == 0) {
    uVar1 = *(ushort *)(param_2 + 8);
    if ((int)(uint)uVar1 < 1 << (ulong)(*(byte *)(param_1 + 0x2a0) & 0x1f)) {
      local_30 = uVar1 >> 8 | (ushort)((uVar1 & 0xff00ff) << 8);
      FUN_00dc8238(param_1,0x624b4744,&local_30,2);
      if (*(long *)(lVar4 + 0x28) == local_28) {
        return;
      }
    }
    else {
      png_warning(param_1,"Ignoring attempt to write bKGD chunk out-of-range for bit_depth");
      if (*(long *)(lVar4 + 0x28) == local_28) {
        return;
      }
    }
  }
  else {
    uVar1 = *(ushort *)(param_2 + 2);
    uVar2 = *(ushort *)(param_2 + 4);
    uVar3 = *(ushort *)(param_2 + 6);
    local_2d = (undefined)uVar2;
    local_30 = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
    local_2e = (undefined)(uVar2 >> 8);
    local_2c = (undefined)(uVar3 >> 8);
    local_2b = (undefined)uVar3;
    if ((*(char *)(param_1 + 0x2a0) == '\b') && ((ushort)(uVar2 | uVar1 | uVar3) >> 8 != 0)) {
      png_warning(param_1,"Ignoring attempt to write 16-bit bKGD chunk when bit_depth is 8");
      if (*(long *)(lVar4 + 0x28) == local_28) {
        return;
      }
    }
    else {
      FUN_00dc8238(param_1,0x624b4744,&local_30,6);
      if (*(long *)(lVar4 + 0x28) == local_28) {
        return;
      }
    }
  }
LAB_00dc9ffc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


