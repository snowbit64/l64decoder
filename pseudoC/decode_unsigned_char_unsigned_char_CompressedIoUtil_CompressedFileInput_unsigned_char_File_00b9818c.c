// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _decode<unsigned_char,unsigned_char,CompressedIoUtil::CompressedFileInput<unsigned_char,File>>
// Entry Point: 00b9818c
// Size: 564 bytes
// Signature: void __cdecl _decode<unsigned_char,unsigned_char,CompressedIoUtil::CompressedFileInput<unsigned_char,File>>(CompressedFileInput * param_1, uint param_2, uint param_3, uchar * param_4)


/* void RLEUtil::_decode<unsigned char, unsigned char,
   CompressedIoUtil::CompressedFileInput<unsigned char, File>
   >(CompressedIoUtil::CompressedFileInput<unsigned char, File>*, unsigned int, unsigned int,
   unsigned char*) */

void RLEUtil::
     _decode<unsigned_char,unsigned_char,CompressedIoUtil::CompressedFileInput<unsigned_char,File>>
               (CompressedFileInput *param_1,uint param_2,uint param_3,uchar *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  CompressedFileInput *pCVar5;
  ulong uVar6;
  uchar uVar7;
  uint uVar8;
  int iVar9;
  uchar uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined auVar15 [16];
  byte local_60 [4];
  uchar local_5c [4];
  long local_58;
  
  uVar6 = (ulong)param_2;
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pCVar5 = param_1;
  if (*(uint *)(param_1 + 0xc) < *(uint *)(param_1 + 8)) {
    uVar11 = 0;
    uVar12 = 0;
    uVar10 = '\0';
    do {
      auVar15 = (**(code **)(**(long **)param_1 + 0x28))(*(long **)param_1,local_5c,1);
      uVar6 = auVar15._8_8_;
      pCVar5 = auVar15._0_8_;
      if (auVar15._0_4_ != 1) break;
      uVar2 = uVar11 + 1;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      param_4[uVar11] = local_5c[0];
      uVar13 = 1;
      uVar7 = local_5c[0];
      if ((((local_5c[0] == uVar10) && (((uVar12 ^ 1) & 1) == 0)) &&
          (uVar13 = uVar12, uVar7 = uVar10, *(uint *)(param_1 + 0xc) < *(uint *)(param_1 + 8))) &&
         (auVar15 = (**(code **)(**(long **)param_1 + 0x28))(*(long **)param_1,local_60,1),
         uVar7 = local_5c[0], auVar15._0_4_ == 1)) {
        uVar13 = (uint)local_60[0];
        uVar12 = *(int *)(param_1 + 0xc) + 1;
        *(uint *)(param_1 + 0xc) = uVar12;
        uVar8 = uVar13;
        while (((uVar8 == 0xff && (uVar12 < *(uint *)(param_1 + 8))) &&
               (auVar15 = (**(code **)(**(long **)param_1 + 0x28))(*(long **)param_1,local_60,1),
               auVar15._0_4_ == 1))) {
          uVar12 = *(int *)(param_1 + 0xc) + 1;
          uVar8 = (uint)local_60[0];
          uVar13 = uVar13 + uVar8;
          *(uint *)(param_1 + 0xc) = uVar12;
        }
        uVar7 = local_5c[0];
        if (uVar13 != 0) {
          uVar12 = uVar2;
          if ((uVar13 < 8) || (uVar11 + uVar13 < uVar2)) {
LAB_00b98370:
            do {
              uVar11 = uVar12 + 1;
              param_4[uVar12] = local_5c[0];
              uVar12 = uVar11;
            } while (uVar2 + uVar13 != uVar11);
          }
          else if (uVar13 < 0x20) {
            uVar12 = 0;
LAB_00b98338:
            uVar8 = uVar13 & 0xfffffff8;
            iVar9 = uVar12 - uVar8;
            uVar12 = uVar11 + uVar12 + 1;
            do {
              *(ulong *)(param_4 + uVar12) =
                   CONCAT17(local_5c[0],
                            CONCAT16(local_5c[0],
                                     CONCAT15(local_5c[0],
                                              CONCAT14(local_5c[0],
                                                       CONCAT13(local_5c[0],
                                                                CONCAT12(local_5c[0],
                                                                         CONCAT11(local_5c[0],
                                                                                  local_5c[0])))))))
              ;
              iVar9 = iVar9 + 8;
              uVar12 = uVar12 + 8;
            } while (iVar9 != 0);
            uVar12 = uVar2 + uVar8;
            if (uVar13 != uVar8) goto LAB_00b98370;
          }
          else {
            uVar12 = uVar13 & 0xffffffe0;
            uVar14 = CONCAT17(local_5c[0],
                              CONCAT16(local_5c[0],
                                       CONCAT15(local_5c[0],
                                                CONCAT14(local_5c[0],
                                                         CONCAT13(local_5c[0],
                                                                  CONCAT12(local_5c[0],
                                                                           CONCAT11(local_5c[0],
                                                                                    local_5c[0])))))
                                      ));
            uVar8 = uVar2;
            uVar3 = uVar12;
            do {
              puVar1 = (undefined8 *)(param_4 + uVar8);
              uVar3 = uVar3 - 0x20;
              uVar8 = uVar8 + 0x20;
              puVar1[1] = uVar14;
              *puVar1 = CONCAT17(local_5c[0],
                                 CONCAT16(local_5c[0],
                                          CONCAT15(local_5c[0],
                                                   CONCAT14(local_5c[0],
                                                            CONCAT13(local_5c[0],
                                                                     CONCAT12(local_5c[0],
                                                                              CONCAT11(local_5c[0],
                                                                                       local_5c[0]))
                                                                    )))));
              puVar1[3] = uVar14;
              puVar1[2] = CONCAT17(local_5c[0],
                                   CONCAT16(local_5c[0],
                                            CONCAT15(local_5c[0],
                                                     CONCAT14(local_5c[0],
                                                              CONCAT13(local_5c[0],
                                                                       CONCAT12(local_5c[0],
                                                                                CONCAT11(local_5c[0]
                                                                                         ,local_5c[0
                                                  ])))))));
            } while (uVar3 != 0);
            if (uVar13 != uVar12) {
              if ((uVar13 & 0x18) == 0) {
                uVar12 = uVar2 + uVar12;
                goto LAB_00b98370;
              }
              goto LAB_00b98338;
            }
          }
          uVar2 = uVar2 + uVar13;
          uVar13 = 0;
        }
      }
      uVar12 = uVar13;
      uVar11 = uVar2;
      uVar6 = auVar15._8_8_;
      pCVar5 = auVar15._0_8_;
      uVar10 = uVar7;
    } while (*(uint *)(param_1 + 0xc) < *(uint *)(param_1 + 8));
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pCVar5,uVar6);
}


