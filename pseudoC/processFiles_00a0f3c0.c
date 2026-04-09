// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processFiles
// Entry Point: 00a0f3c0
// Size: 316 bytes
// Signature: undefined __thiscall processFiles(EnvMapBlender * this, bool * param_1)


/* EnvMapBlender::processFiles(bool volatile&) */

void __thiscall EnvMapBlender::processFiles(EnvMapBlender *this,bool *param_1)

{
  uint *puVar1;
  EnvMapBlender *pEVar2;
  ImageDesc *pIVar3;
  uint uVar4;
  byte bVar5;
  ImageDesc *pIVar6;
  long lVar7;
  
  Semaphore::wait();
  if (*param_1 == false) {
    do {
      if (*(int *)(this + 0x3a0) != 2) {
        uVar4 = *(uint *)(this + 0xe0);
        pEVar2 = this + 0xe4;
        if (4 < (ulong)uVar4) {
          pEVar2 = *(EnvMapBlender **)(this + 0x388);
        }
        if (uVar4 != 0) {
          lVar7 = 0;
          do {
            puVar1 = (uint *)(pEVar2 + lVar7);
            pIVar6 = (ImageDesc *)((long)puVar1 + 0x59);
            if (((byte)*(ImageDesc *)(puVar1 + 0x16) & 1) != 0) {
              pIVar6 = *(ImageDesc **)(puVar1 + 0x1a);
            }
            pIVar6 = (ImageDesc *)TextureUtil::getSpecificFilename((char *)pIVar6);
            bVar5 = ImageLoadUtil::loadImage((char *)pIVar6,1,(ImageDesc *)puVar1,0);
            *(byte *)(puVar1 + 0x28) = bVar5 & 1;
            if ((bVar5 & 1) != 0) {
              SphericalHarmonicsUtil::computeSHB2FromCubeMap
                        ((SHB2 *)(puVar1 + 0x1c),puVar1[4],*(uchar **)(puVar1 + 10),puVar1[0x10],
                         puVar1[6],*puVar1,puVar1[1],puVar1[5],puVar1[4]);
            }
            pIVar3 = (ImageDesc *)((long)puVar1 + 0x59);
            if (((byte)*(ImageDesc *)(puVar1 + 0x16) & 1) != 0) {
              pIVar3 = *(ImageDesc **)(puVar1 + 0x1a);
            }
            if ((pIVar6 != (ImageDesc *)0x0) && (pIVar6 != pIVar3)) {
              operator_delete__(pIVar6);
            }
            lVar7 = lVar7 + 0xa8;
          } while ((ulong)uVar4 * 0xa8 - lVar7 != 0);
        }
        *(undefined4 *)(this + 0x3a0) = 2;
      }
      Semaphore::wait();
    } while (*param_1 == false);
  }
  return;
}


