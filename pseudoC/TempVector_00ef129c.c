// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TempVector
// Entry Point: 00ef129c
// Size: 164 bytes
// Signature: undefined __thiscall ~TempVector(TempVector<std::__ndk1::optional<std::__ndk1::pair<Luau::AstName,Luau::Location>>> * this)


/* Luau::TempVector<std::__ndk1::optional<std::__ndk1::pair<Luau::AstName, Luau::Location> >
   >::~TempVector() */

void __thiscall
Luau::TempVector<std::__ndk1::optional<std::__ndk1::pair<Luau::AstName,Luau::Location>>>::
~TempVector(TempVector<std::__ndk1::optional<std::__ndk1::pair<Luau::AstName,Luau::Location>>> *this
           )

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  plVar2 = *(long **)this;
  puVar3 = (undefined8 *)plVar2[1];
  puVar5 = (undefined8 *)(*plVar2 + *(long *)(this + 8) * 0x20);
  if (puVar5 != puVar3) {
    if ((undefined8 *)((long)puVar5 + ((long)puVar3 - (long)puVar5 & 0xffffffffffffffe0U)) != puVar3
       ) {
      lVar6 = (long)puVar3 - (long)puVar5 >> 5;
      do {
        cVar4 = *(char *)(puVar5 + 3);
        if (cVar4 == *(char *)(puVar5 + lVar6 * 4 + 3)) {
          if (cVar4 != '\0') {
            puVar1 = puVar5 + lVar6 * 4;
            uVar8 = puVar1[2];
            uVar7 = puVar1[1];
            *puVar5 = *puVar1;
            puVar5[2] = uVar8;
            puVar5[1] = uVar7;
          }
        }
        else if (cVar4 == '\0') {
          puVar1 = puVar5 + lVar6 * 4;
          *(undefined *)(puVar5 + 3) = 1;
          uVar8 = puVar1[1];
          uVar7 = *puVar1;
          puVar5[2] = puVar1[2];
          puVar5[1] = uVar8;
          *puVar5 = uVar7;
        }
        else {
          *(undefined *)(puVar5 + 3) = 0;
        }
        puVar5 = puVar5 + 4;
      } while (puVar5 + lVar6 * 4 != puVar3);
    }
    plVar2[1] = (long)puVar5;
  }
  return;
}


