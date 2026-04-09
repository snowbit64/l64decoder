// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CopyFrom
// Entry Point: 00d1db70
// Size: 204 bytes
// Signature: undefined __thiscall CopyFrom(ByteQueue * this, ByteQueue * param_1)


/* CryptoPP::ByteQueue::CopyFrom(CryptoPP::ByteQueue const&) */

void __thiscall CryptoPP::ByteQueue::CopyFrom(ByteQueue *this,ByteQueue *param_1)

{
  ByteQueue BVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  BVar1 = param_1[0x14];
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x38) = 0;
  this[0x14] = BVar1;
  *(undefined8 *)(this + 0x18) = uVar5;
  puVar2 = (undefined8 *)operator_new(0x38);
  puVar6 = *(undefined8 **)(param_1 + 0x20);
  *puVar2 = *puVar6;
                    /* try { // try from 00d1dbb8 to 00d1dbbb has its CatchHandler @ 00d1dc3c */
  SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>::SecBlock
            ((SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>> *)
             (puVar2 + 1),(SecBlock *)(puVar6 + 1));
  uVar7 = puVar6[6];
  uVar5 = puVar6[5];
  *(undefined8 **)(this + 0x20) = puVar2;
  plVar3 = *(long **)(param_1 + 0x20);
  puVar2[6] = uVar7;
  puVar2[5] = uVar5;
  plVar3 = (long *)*plVar3;
  *(undefined8 **)(this + 0x28) = puVar2;
  while (plVar3 != (long *)0x0) {
    puVar2 = (undefined8 *)operator_new(0x38);
    *puVar2 = *plVar3;
                    /* try { // try from 00d1dbf0 to 00d1dbf3 has its CatchHandler @ 00d1dc40 */
    SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>::SecBlock
              ((SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>> *)
               (puVar2 + 1),(SecBlock *)(plVar3 + 1));
    uVar5 = plVar3[5];
    puVar6 = *(undefined8 **)(this + 0x28);
    puVar2[6] = plVar3[6];
    puVar2[5] = uVar5;
    *puVar6 = puVar2;
    plVar3 = (long *)*plVar3;
    *(undefined8 **)(this + 0x28) = puVar2;
  }
  lVar4 = *(long *)this;
  *puVar2 = 0;
                    /* WARNING: Could not recover jumptable at 0x00d1dc38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x38))
            (this,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),0,1);
  return;
}


