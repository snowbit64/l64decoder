// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processContacts
// Entry Point: 0074b080
// Size: 248 bytes
// Signature: undefined processContacts(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CollisionEffectManager::processContacts() */

void CollisionEffectManager::processContacts(void)

{
  ContactReport *pCVar1;
  long lVar2;
  long *in_x0;
  EffectModel *pEVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar6 = in_x0[4];
  if (lVar6 != in_x0[3]) {
    uVar7 = 0;
    lVar6 = in_x0[3];
    do {
      lVar2 = *in_x0;
      if (in_x0[1] - lVar2 != 0) {
        pCVar1 = (ContactReport *)(lVar6 + uVar7 * 0x40);
        uVar4 = 0;
        uVar5 = (in_x0[1] - lVar2 >> 3) * -0x71c71c71c71c71c7;
        do {
          pEVar3 = (EffectModel *)(lVar2 + uVar4 * 0x48);
          if (*pEVar3 != (EffectModel)0x0) {
            lVar6 = lVar2 + uVar4 * 0x48;
            fVar8 = *(float *)(pCVar1 + 0x38);
            fVar9 = *(float *)(lVar6 + 4);
            fVar10 = *(float *)(lVar6 + 8);
            if ((fVar9 <= fVar8 || fVar10 < fVar8) || fVar9 > fVar8 && fVar10 == fVar8) {
              fVar11 = *(float *)(lVar2 + uVar4 * 0x48 + 0xc);
              if (*(float *)(pCVar1 + 0x3c) <= fVar11) {
                fVar10 = fVar9;
              }
              if (fVar10 <= fVar8) {
                startEffect((CollisionEffectManager *)in_x0,pCVar1,pEVar3,
                            *(float *)(pCVar1 + 0x3c) <= fVar11);
                break;
              }
            }
          }
          uVar4 = (ulong)((int)uVar4 + 1);
        } while (uVar4 <= uVar5 && uVar5 - uVar4 != 0);
      }
      lVar6 = in_x0[3];
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 < (ulong)(in_x0[4] - lVar6 >> 6));
  }
  in_x0[4] = lVar6;
  return;
}


