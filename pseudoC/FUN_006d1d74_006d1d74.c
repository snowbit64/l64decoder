// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006d1d74
// Entry Point: 006d1d74
// Size: 392 bytes
// Signature: undefined FUN_006d1d74(void)


long * FUN_006d1d74(long *param_1,long param_2,long param_3,long param_4,long param_5,int param_6)

{
  ulong __n;
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  undefined8 local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1 == (long *)0x0) goto LAB_006d1ec4;
  __n = *(long *)(param_5 + 0x18) - (param_4 - param_2);
  lVar4 = param_3 - param_2;
  if (__n == 0 || *(long *)(param_5 + 0x18) < param_4 - param_2) {
    __n = 0;
  }
  if ((lVar4 < 1) || (lVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2,lVar4), lVar2 == lVar4)
     ) {
    if (__n != 0) {
      if (__n < 0x17) {
        pvVar5 = (void *)((ulong)&local_80 | 1);
        local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
      }
      else {
        uVar3 = __n + 0x10 & 0xfffffffffffffff0;
        pvVar5 = operator_new(uVar3);
        local_80 = uVar3 | 1;
        local_78 = __n;
        local_70 = pvVar5;
      }
      memset(pvVar5,param_6,__n);
      *(undefined *)((long)pvVar5 + __n) = 0;
      pvVar5 = (void *)((ulong)&local_80 | 1);
      if ((local_80 & 1) != 0) {
        pvVar5 = local_70;
      }
                    /* try { // try from 006d1e64 to 006d1e6f has its CatchHandler @ 006d1efc */
      uVar3 = (**(code **)(*param_1 + 0x60))(param_1,pvVar5,__n);
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      if (uVar3 != __n) goto LAB_006d1ec0;
    }
    param_4 = param_4 - param_3;
    if ((param_4 < 1) ||
       (lVar4 = (**(code **)(*param_1 + 0x60))(param_1,param_3,param_4), lVar4 == param_4)) {
      *(undefined8 *)(param_5 + 0x18) = 0;
      goto LAB_006d1ec4;
    }
  }
LAB_006d1ec0:
  param_1 = (long *)0x0;
LAB_006d1ec4:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


