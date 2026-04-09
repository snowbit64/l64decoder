// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3a904
// Entry Point: 00d3a904
// Size: 480 bytes
// Signature: undefined FUN_00d3a904(void)


void FUN_00d3a904(long param_1,byte **param_2,byte *param_3,void **param_4,long param_5)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *__src;
  size_t __n;
  byte local_6c;
  byte local_6b;
  byte local_6a;
  byte local_69;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pbVar6 = *param_2;
  if (pbVar6 != param_3) {
    do {
      pbVar1 = (byte *)(param_1 + 0x3e0 + (ulong)*pbVar6 * 4);
      __src = pbVar1 + 1;
      __n = (size_t)*pbVar1;
      if (__n == 0) {
        uVar4 = (**(code **)(param_1 + 0x1d0))(*(undefined8 *)(param_1 + 0x1d8));
        if ((int)uVar4 < 0) {
LAB_00d3aa68:
          __n = 0;
        }
        else {
          bVar2 = (byte)uVar4;
          if (uVar4 < 0x80) {
            __n = 1;
            local_6c = bVar2;
          }
          else if (uVar4 < 0x800) {
            local_6c = (byte)(uVar4 >> 6) | 0xc0;
            local_6b = bVar2 & 0x3f | 0x80;
            __n = 2;
          }
          else if (uVar4 >> 0x10 == 0) {
            local_6c = (byte)(uVar4 >> 0xc) | 0xe0;
            local_6b = (byte)(uVar4 >> 6) & 0x3f | 0x80;
            local_6a = bVar2 & 0x3f | 0x80;
            __n = 3;
          }
          else {
            if (0x10 < uVar4 >> 0x10) goto LAB_00d3aa68;
            local_6c = (byte)(uVar4 >> 0x12) | 0xf0;
            local_6b = (byte)(uVar4 >> 0xc) & 0x3f | 0x80;
            local_6a = (byte)(uVar4 >> 6) & 0x3f | 0x80;
            local_69 = bVar2 & 0x3f | 0x80;
            __n = 4;
          }
        }
        if (param_5 - (long)*param_4 < (long)__n) {
LAB_00d3aacc:
          uVar5 = 2;
          if (*(long *)(lVar3 + 0x28) == local_68) {
            return;
          }
          goto LAB_00d3aae0;
        }
        __src = &local_6c;
        pbVar6 = *param_2 + ((ulong)*(byte *)(param_1 + 0x88 + (ulong)**param_2) - 3);
      }
      else {
        if (param_5 - (long)*param_4 < (long)__n) goto LAB_00d3aacc;
        pbVar6 = pbVar6 + 1;
      }
      *param_2 = pbVar6;
      memcpy(*param_4,__src,__n);
      *param_4 = (void *)((long)*param_4 + __n);
      pbVar6 = *param_2;
    } while (pbVar6 != param_3);
  }
  uVar5 = 0;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_00d3aae0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


