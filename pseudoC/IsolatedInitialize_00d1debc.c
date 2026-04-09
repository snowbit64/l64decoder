// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsolatedInitialize
// Entry Point: 00d1debc
// Size: 236 bytes
// Signature: undefined __thiscall IsolatedInitialize(ByteQueue * this, NameValuePairs * param_1)


/* CryptoPP::ByteQueue::IsolatedInitialize(CryptoPP::NameValuePairs const&) */

void __thiscall CryptoPP::ByteQueue::IsolatedInitialize(ByteQueue *this,NameValuePairs *param_1)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  void **ppvVar4;
  long lVar5;
  void **ppvVar6;
  void *pvVar7;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1,"NodeSize",&int::typeinfo,&local_3c);
  lVar5 = (long)local_3c;
  ppvVar4 = *(void ***)(this + 0x20);
  if ((uVar2 & 1) == 0) {
    lVar5 = 0x100;
  }
  ppvVar6 = (void **)*ppvVar4;
  *(long *)(this + 0x18) = lVar5;
  if (ppvVar6 != (void **)0x0) {
    do {
      pvVar7 = *ppvVar6;
      pvVar3 = ppvVar6[4];
      uVar2 = (ulong)ppvVar6[2];
      if (ppvVar6[3] <= ppvVar6[2]) {
        uVar2 = (ulong)ppvVar6[3];
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined *)((long)pvVar3 + (uVar2 - 1)) = 0;
      }
                    /* try { // try from 00d1df54 to 00d1df57 has its CatchHandler @ 00d1dfa8 */
      UnalignedDeallocate(pvVar3);
      operator_delete(ppvVar6);
      ppvVar6 = (void **)pvVar7;
    } while (pvVar7 != (void *)0x0);
    ppvVar4 = *(void ***)(this + 0x20);
  }
  *(void ***)(this + 0x28) = ppvVar4;
  ppvVar4[5] = (void *)0x0;
  ppvVar4[6] = (void *)0x0;
  *(undefined8 *)(this + 0x38) = 0;
  **(undefined8 **)(this + 0x20) = 0;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


