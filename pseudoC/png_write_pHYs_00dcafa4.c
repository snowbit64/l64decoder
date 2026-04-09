// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_pHYs
// Entry Point: 00dcafa4
// Size: 204 bytes
// Signature: undefined png_write_pHYs(void)


void png_write_pHYs(undefined8 param_1,undefined4 param_2,ulong param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  undefined local_54;
  undefined local_53;
  undefined local_52;
  undefined local_51;
  undefined local_50;
  undefined local_4f;
  undefined local_4e;
  undefined local_4d;
  undefined local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  uVar2 = param_3 & 0xffffffff;
  local_48 = *(long *)(lVar1 + 0x28);
  if (1 < param_4) {
    png_warning(param_1,"Unrecognized unit type for pHYs chunk");
  }
  local_54 = (undefined)((uint)param_2 >> 0x18);
  local_53 = (undefined)((uint)param_2 >> 0x10);
  local_4f = (undefined)(uVar2 >> 0x10);
  local_52 = (undefined)((uint)param_2 >> 8);
  local_4e = (undefined)(uVar2 >> 8);
  local_50 = (undefined)(uVar2 >> 0x18);
  local_4d = (undefined)param_3;
  local_51 = (char)param_2;
  local_4c = (char)param_4;
  FUN_00dc8238(param_1,0x70485973,&local_54,9);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


