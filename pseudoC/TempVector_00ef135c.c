// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TempVector
// Entry Point: 00ef135c
// Size: 124 bytes
// Signature: undefined __thiscall ~TempVector(TempVector<std::__ndk1::pair<Luau::AstName,Luau::Location>> * this)


/* Luau::TempVector<std::__ndk1::pair<Luau::AstName, Luau::Location> >::~TempVector() */

void __thiscall
Luau::TempVector<std::__ndk1::pair<Luau::AstName,Luau::Location>>::~TempVector
          (TempVector<std::__ndk1::pair<Luau::AstName,Luau::Location>> *this)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  plVar1 = *(long **)this;
  puVar2 = (undefined8 *)plVar1[1];
  puVar4 = (undefined8 *)(*plVar1 + *(long *)(this + 8) * 0x18);
  if (puVar4 != puVar2) {
    lVar3 = ((long)puVar2 - (long)puVar4) / 0x18;
    puVar5 = puVar4 + lVar3 * 3;
    while (puVar5 != puVar2) {
      puVar5 = puVar4 + lVar3 * 3;
      *puVar4 = *puVar5;
      uVar6 = puVar5[1];
      puVar4[2] = puVar5[2];
      puVar4[1] = uVar6;
      puVar4 = puVar4 + 3;
      puVar5 = puVar4 + lVar3 * 3;
    }
    plVar1[1] = (long)puVar4;
  }
  return;
}


