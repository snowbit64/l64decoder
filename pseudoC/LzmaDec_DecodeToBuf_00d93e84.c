// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaDec_DecodeToBuf
// Entry Point: 00d93e84
// Size: 312 bytes
// Signature: undefined LzmaDec_DecodeToBuf(void)


int LzmaDec_DecodeToBuf(long param_1,void *param_2,ulong *param_3,long param_4,long *param_5,
                       undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  size_t __n;
  ulong uVar8;
  long local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar8 = *param_3;
  lVar6 = *param_5;
  *param_3 = 0;
  *param_5 = 0;
  do {
    lVar7 = *(long *)(param_1 + 0x30);
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar7 == lVar3) {
      lVar7 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    lVar2 = lVar3;
    if (uVar8 <= (ulong)(lVar3 - lVar7)) {
      lVar2 = lVar7 + uVar8;
    }
    uVar1 = 0;
    if (uVar8 <= (ulong)(lVar3 - lVar7)) {
      uVar1 = param_6;
    }
    local_70 = lVar6;
    iVar5 = LzmaDec_DecodeToDic(param_1,lVar2,param_4,&local_70,uVar1,param_7);
    lVar3 = local_70;
    *param_5 = *param_5 + local_70;
    __n = *(long *)(param_1 + 0x30) - lVar7;
    memcpy(param_2,(void *)(*(long *)(param_1 + 0x18) + lVar7),__n);
    *param_3 = *param_3 + __n;
    if ((iVar5 != 0) || (__n == 0)) break;
    uVar8 = uVar8 - __n;
    param_2 = (void *)((long)param_2 + __n);
    lVar6 = lVar6 - lVar3;
    param_4 = param_4 + lVar3;
  } while (uVar8 != 0);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


