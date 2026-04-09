// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finalizeChunk
// Entry Point: 00bb0240
// Size: 240 bytes
// Signature: undefined __thiscall finalizeChunk(BtSerializerWrapper * this, btChunk * param_1, char * param_2, int param_3, void * param_4)


/* Bt2PhysicsSerialization::BtSerializerWrapper::finalizeChunk(btChunk*, char const*, int, void*) */

void __thiscall
Bt2PhysicsSerialization::BtSerializerWrapper::finalizeChunk
          (BtSerializerWrapper *this,btChunk *param_1,char *param_2,int param_3,void *param_4)

{
  long *plVar1;
  long **pplVar2;
  long **pplVar3;
  long **pplVar4;
  
  pplVar2 = (long **)(this + 0x28);
  pplVar3 = (long **)*pplVar2;
  *(int *)param_1 = param_3;
  *(undefined4 *)(param_1 + 0x10) = 0xdeaddead;
  pplVar4 = pplVar2;
  if (pplVar3 != (long **)0x0) {
    pplVar2 = (long **)(this + 0x28);
    do {
      while (pplVar4 = pplVar3, param_4 < pplVar4[4]) {
        pplVar2 = pplVar4;
        pplVar3 = (long **)*pplVar4;
        if ((long **)*pplVar4 == (long **)0x0) {
          plVar1 = *pplVar4;
          goto joined_r0x00bb02fc;
        }
      }
      if (param_4 <= pplVar4[4]) break;
      pplVar2 = pplVar4 + 1;
      pplVar3 = (long **)*pplVar2;
    } while ((long **)*pplVar2 != (long **)0x0);
  }
  plVar1 = *pplVar2;
joined_r0x00bb02fc:
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)operator_new(0x30);
    plVar1[4] = (long)param_4;
    plVar1[5] = (long)param_1;
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = (long)pplVar4;
    *pplVar2 = plVar1;
    if (**(long **)(this + 0x20) != 0) {
      *(long *)(this + 0x20) = **(long **)(this + 0x20);
      plVar1 = *pplVar2;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x28),(__tree_node_base *)plVar1);
    *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
  }
  return;
}


