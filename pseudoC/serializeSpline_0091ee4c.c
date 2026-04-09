// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serializeSpline
// Entry Point: 0091ee4c
// Size: 352 bytes
// Signature: undefined __cdecl serializeSpline(char * param_1, uint param_2, Spline * param_3, uchar * * param_4, uint * param_5)


/* SerializationHelper::serializeSpline(char const*, unsigned int, Spline*, unsigned char*&,
   unsigned int&) */

void SerializationHelper::serializeSpline
               (char *param_1,uint param_2,Spline *param_3,uchar **param_4,uint *param_5)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  size_t sVar5;
  int *__s;
  undefined4 uVar6;
  undefined4 *puVar7;
  ulong __n;
  ulong uVar8;
  int iVar9;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  *param_5 = 0;
  sVar5 = strlen(param_1);
  *param_5 = (int)sVar5 + 0x13U & 0xfffffffc;
  uVar3 = Spline::getNumOfCV();
  uVar4 = *param_5 + uVar3 * 0xc;
  *param_5 = uVar4;
  __s = (int *)operator_new__((ulong)uVar4);
  *param_4 = (uchar *)__s;
  memset(__s,0,(ulong)uVar4);
  sVar5 = strlen(param_1);
  __n = sVar5 & 0xffffffff;
  iVar9 = (int)sVar5;
  *__s = iVar9;
  memcpy(__s + 1,param_1,__n);
  uVar8 = (ulong)((iVar9 + 3U & 0xfffffffc) - iVar9);
  puVar1 = (uint *)((long)(__s + 1) + uVar8 + __n);
  *puVar1 = param_2;
  uVar4 = Spline::getForm();
  puVar1[1] = uVar4;
  puVar1[2] = uVar3;
  if (uVar3 != 0) {
    uVar4 = 0;
    puVar7 = (undefined4 *)((long)__s + uVar8 + __n + 0x18);
    do {
      Spline::getCV(param_3,uVar4,(float *)&local_78);
      uVar4 = uVar4 + 1;
      *(undefined8 *)(puVar7 + -2) = local_78;
      *puVar7 = local_70;
      puVar7 = puVar7 + 3;
    } while (uVar3 != uVar4);
  }
  uVar6 = 6;
  if (*(int *)(param_3 + 0x30) != 0) {
    uVar6 = 2;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


