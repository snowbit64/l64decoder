// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GCM_Xor16_NEON
// Entry Point: 00ce2d88
// Size: 20 bytes
// Signature: undefined __cdecl GCM_Xor16_NEON(uchar * param_1, uchar * param_2, uchar * param_3)


/* CryptoPP::GCM_Xor16_NEON(unsigned char*, unsigned char const*, unsigned char const*) */

void CryptoPP::GCM_Xor16_NEON(uchar *param_1,uchar *param_2,uchar *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)param_2;
  uVar4 = *(undefined8 *)(param_3 + 8);
  uVar3 = *(undefined8 *)param_3;
  *(ulong *)(param_1 + 8) =
       CONCAT17((byte)((ulong)uVar4 >> 0x38) ^ (byte)((ulong)uVar2 >> 0x38),
                CONCAT16((byte)((ulong)uVar4 >> 0x30) ^ (byte)((ulong)uVar2 >> 0x30),
                         CONCAT15((byte)((ulong)uVar4 >> 0x28) ^ (byte)((ulong)uVar2 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar4 >> 0x20) ^
                                           (byte)((ulong)uVar2 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar4 >> 0x18) ^
                                                    (byte)((ulong)uVar2 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar4 >> 0x10) ^
                                                             (byte)((ulong)uVar2 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar4 >> 8) ^
                                                                      (byte)((ulong)uVar2 >> 8),
                                                                      (byte)uVar4 ^ (byte)uVar2)))))
                        ));
  *(ulong *)param_1 =
       CONCAT17((byte)((ulong)uVar3 >> 0x38) ^ (byte)((ulong)uVar1 >> 0x38),
                CONCAT16((byte)((ulong)uVar3 >> 0x30) ^ (byte)((ulong)uVar1 >> 0x30),
                         CONCAT15((byte)((ulong)uVar3 >> 0x28) ^ (byte)((ulong)uVar1 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar3 >> 0x20) ^
                                           (byte)((ulong)uVar1 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar3 >> 0x18) ^
                                                    (byte)((ulong)uVar1 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar3 >> 0x10) ^
                                                             (byte)((ulong)uVar1 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar3 >> 8) ^
                                                                      (byte)((ulong)uVar1 >> 8),
                                                                      (byte)uVar3 ^ (byte)uVar1)))))
                        ));
  return;
}


