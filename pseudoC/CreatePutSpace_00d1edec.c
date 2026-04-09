// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreatePutSpace
// Entry Point: 00d1edec
// Size: 224 bytes
// Signature: undefined __thiscall CreatePutSpace(ByteQueue * this, ulong * param_1)


/* CryptoPP::ByteQueue::CreatePutSpace(unsigned long&) */

long __thiscall CryptoPP::ByteQueue::CreatePutSpace(ByteQueue *this,ulong *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  lVar2 = *(long *)(this + 0x38);
  if (lVar2 != 0) {
    *(undefined8 *)(this + 0x38) = 0;
    (**(code **)(*(long *)this + 0x38))(this,*(undefined8 *)(this + 0x30),lVar2,0,1);
  }
  puVar5 = *(undefined8 **)(this + 0x28);
  uVar3 = puVar5[6];
  uVar4 = puVar5[3];
  if (uVar3 == uVar4) {
    puVar1 = (undefined8 *)operator_new(0x38);
    uVar4 = *param_1;
    if (*param_1 <= *(ulong *)(this + 0x18)) {
      uVar4 = *(ulong *)(this + 0x18);
    }
    puVar1[2] = 0xffffffffffffffff;
    puVar1[3] = uVar4;
    if (uVar4 == 0) {
      lVar2 = 0;
    }
    else {
                    /* try { // try from 00d1ee6c to 00d1ee73 has its CatchHandler @ 00d1eecc */
      lVar2 = UnalignedAllocate(uVar4);
      puVar5 = *(undefined8 **)(this + 0x28);
    }
    uVar3 = 0;
    *puVar1 = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar5 = puVar1;
    puVar1[4] = lVar2;
    *(undefined8 **)(this + 0x28) = puVar1;
    puVar5 = puVar1;
  }
  else {
    lVar2 = puVar5[4];
  }
  *param_1 = uVar4 - uVar3;
  return lVar2 + puVar5[6];
}


