// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CombineMessageAndShiftRegister
// Entry Point: 00c7f484
// Size: 312 bytes
// Signature: undefined __thiscall CombineMessageAndShiftRegister(CFB_DecryptionTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>> * this, uchar * param_1, uchar * param_2, uchar * param_3, ulong param_4)


/* CryptoPP::CFB_DecryptionTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,
   CryptoPP::CFB_ModePolicy> >::CombineMessageAndShiftRegister(unsigned char*, unsigned char*,
   unsigned char const*, unsigned long) */

void __thiscall
CryptoPP::
CFB_DecryptionTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>>
::CombineMessageAndShiftRegister
          (CFB_DecryptionTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>>
           *this,uchar *param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if (param_4 == 0) {
    return;
  }
  if (param_4 < 8) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (((param_2 + param_4 <= param_1 || param_1 + param_4 <= param_2) &&
        (param_3 + param_4 <= param_1 || param_1 + param_4 <= param_3)) &&
       (param_3 + param_4 <= param_2 || param_2 + param_4 <= param_3)) {
      if (param_4 < 0x20) {
        uVar3 = 0;
      }
      else {
        uVar2 = param_4 & 0xffffffffffffffe0;
        puVar5 = (undefined8 *)(param_3 + 0x10);
        puVar7 = (undefined8 *)(param_2 + 0x10);
        puVar9 = (undefined8 *)(param_1 + 0x10);
        uVar3 = uVar2;
        do {
          uVar13 = puVar5[-1];
          uVar11 = puVar5[-2];
          uVar14 = puVar5[1];
          uVar12 = *puVar5;
          puVar5 = puVar5 + 4;
          uVar3 = uVar3 - 0x20;
          uVar16 = puVar7[-1];
          uVar15 = puVar7[-2];
          uVar18 = puVar7[1];
          uVar17 = *puVar7;
          puVar7[-1] = uVar13;
          puVar7[-2] = uVar11;
          puVar7[1] = uVar14;
          *puVar7 = uVar12;
          puVar7 = puVar7 + 4;
          puVar9[-1] = CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ (byte)((ulong)uVar13 >> 0x38),
                                CONCAT16((byte)((ulong)uVar16 >> 0x30) ^
                                         (byte)((ulong)uVar13 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar16 >> 0x28) ^
                                                  (byte)((ulong)uVar13 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar16 >> 0x20) ^
                                                           (byte)((ulong)uVar13 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar16 >> 0x18) ^
                                                                    (byte)((ulong)uVar13 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar16 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar13 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar16 >> 8) ^ (byte)((ulong)uVar13 >> 8),
                                                  (byte)uVar16 ^ (byte)uVar13)))))));
          puVar9[-2] = CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)((ulong)uVar11 >> 0x38),
                                CONCAT16((byte)((ulong)uVar15 >> 0x30) ^
                                         (byte)((ulong)uVar11 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar15 >> 0x28) ^
                                                  (byte)((ulong)uVar11 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                                           (byte)((ulong)uVar11 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                                    (byte)((ulong)uVar11 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar15 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar11 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar15 >> 8) ^ (byte)((ulong)uVar11 >> 8),
                                                  (byte)uVar15 ^ (byte)uVar11)))))));
          puVar9[1] = CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                               CONCAT16((byte)((ulong)uVar18 >> 0x30) ^
                                        (byte)((ulong)uVar14 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar18 >> 0x28) ^
                                                 (byte)((ulong)uVar14 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                                          (byte)((ulong)uVar14 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                                   (byte)((ulong)uVar14 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar18 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar14 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar18 >> 8) ^ (byte)((ulong)uVar14 >> 8),
                                                  (byte)uVar18 ^ (byte)uVar14)))))));
          *puVar9 = CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar12 >> 0x38),
                             CONCAT16((byte)((ulong)uVar17 >> 0x30) ^ (byte)((ulong)uVar12 >> 0x30),
                                      CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                               (byte)((ulong)uVar12 >> 0x28),
                                               CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                        (byte)((ulong)uVar12 >> 0x20),
                                                        CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                                 (byte)((ulong)uVar12 >> 0x18),
                                                                 CONCAT12((byte)((ulong)uVar17 >>
                                                                                0x10) ^
                                                                          (byte)((ulong)uVar12 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((ulong)
                                                  uVar17 >> 8) ^ (byte)((ulong)uVar12 >> 8),
                                                  (byte)uVar17 ^ (byte)uVar12)))))));
          puVar9 = puVar9 + 4;
        } while (uVar3 != 0);
        if (uVar2 == param_4) {
          return;
        }
        uVar3 = uVar2;
        if ((param_4 & 0x18) == 0) goto LAB_00c7f58c;
      }
      uVar2 = param_4 & 0xfffffffffffffff8;
      lVar6 = uVar3 - uVar2;
      puVar5 = (undefined8 *)(param_3 + uVar3);
      puVar7 = (undefined8 *)(param_2 + uVar3);
      puVar9 = (undefined8 *)(param_1 + uVar3);
      do {
        uVar11 = *puVar5;
        uVar13 = *puVar7;
        lVar6 = lVar6 + 8;
        *puVar9 = CONCAT17((byte)((ulong)uVar13 >> 0x38) ^ (byte)((ulong)uVar11 >> 0x38),
                           CONCAT16((byte)((ulong)uVar13 >> 0x30) ^ (byte)((ulong)uVar11 >> 0x30),
                                    CONCAT15((byte)((ulong)uVar13 >> 0x28) ^
                                             (byte)((ulong)uVar11 >> 0x28),
                                             CONCAT14((byte)((ulong)uVar13 >> 0x20) ^
                                                      (byte)((ulong)uVar11 >> 0x20),
                                                      CONCAT13((byte)((ulong)uVar13 >> 0x18) ^
                                                               (byte)((ulong)uVar11 >> 0x18),
                                                               CONCAT12((byte)((ulong)uVar13 >> 0x10
                                                                              ) ^ (byte)((ulong)
                                                  uVar11 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar13 >> 8) ^
                                                           (byte)((ulong)uVar11 >> 8),
                                                           (byte)uVar13 ^ (byte)uVar11)))))));
        *puVar7 = uVar11;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (lVar6 != 0);
      if (uVar2 == param_4) {
        return;
      }
    }
  }
LAB_00c7f58c:
  lVar6 = param_4 - uVar2;
  pbVar4 = param_3 + uVar2;
  pbVar8 = param_1 + uVar2;
  pbVar10 = param_2 + uVar2;
  do {
    bVar1 = *pbVar4;
    lVar6 = lVar6 + -1;
    *pbVar8 = *pbVar10 ^ bVar1;
    *pbVar10 = bVar1;
    pbVar4 = pbVar4 + 1;
    pbVar8 = pbVar8 + 1;
    pbVar10 = pbVar10 + 1;
  } while (lVar6 != 0);
  return;
}


