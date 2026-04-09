// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processRequests
// Entry Point: 00a03bc4
// Size: 320 bytes
// Signature: undefined processRequests(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PersistentShadowMap::processRequests() */

void PersistentShadowMap::processRequests(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  long in_x0;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  DividedMap *this;
  LightSource *pLVar7;
  
  DividedMap::eraseNonPersistent();
  this = *(DividedMap **)(in_x0 + 0x10);
  uVar5 = (ulong)*(uint *)(this + 0xc);
  if (*(uint *)(this + 0xc) != 0) {
    puVar6 = (uint *)(*(long *)(this + 0x10) + 0x28);
    do {
      if (((*(long *)(puVar6 + -6) == 0) && (*(long *)(puVar6 + -4) != 0)) &&
         (*(char *)(puVar6 + -1) != '\0')) {
        *puVar6 = *puVar6 >> 1 | *puVar6 << 0x1f;
      }
      puVar6 = puVar6 + 0x22;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  bVar3 = DividedMap::hasPersistentData();
  puVar6 = *(uint **)(in_x0 + 0x38);
  puVar1 = *(uint **)(in_x0 + 0x40);
  *(byte *)(in_x0 + 0x18) = bVar3 & 1;
  *(byte *)(in_x0 + 0x19) = bVar3 & 1;
  for (; puVar6 != puVar1; puVar6 = puVar6 + 6) {
    pLVar7 = *(LightSource **)(puVar6 + 2);
    uVar2 = puVar6[4];
    lVar4 = DividedMap::findRegion(this,pLVar7,uVar2);
    if (lVar4 == 0) {
      DividedMap::allocRegion(this,*puVar6,pLVar7,uVar2,true,puVar6[5]);
      *(undefined *)(in_x0 + 0x19) = 1;
    }
    else {
      *(undefined *)(lVar4 + 0x30) = 1;
    }
    this = *(DividedMap **)(in_x0 + 0x10);
  }
  DividedMap::eraseNonCurrent();
  puVar1 = *(uint **)(in_x0 + 0x28);
  for (puVar6 = *(uint **)(in_x0 + 0x20); puVar6 != puVar1; puVar6 = puVar6 + 6) {
    DividedMap::allocRegion
              (*(DividedMap **)(in_x0 + 0x10),*puVar6,*(LightSource **)(puVar6 + 2),puVar6[4],false,
               0xffffffff);
  }
  return;
}


