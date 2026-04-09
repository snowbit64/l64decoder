// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MergeConvexHulls
// Entry Point: 00ea9834
// Size: 3152 bytes
// Signature: undefined __thiscall MergeConvexHulls(VHACD * this, Parameters * param_1)


/* WARNING: Type propagation algorithm not settling */
/* VHACD::VHACD::MergeConvexHulls(VHACD::IVHACD::Parameters const&) */

void __thiscall VHACD::VHACD::MergeConvexHulls(VHACD *this,Parameters *param_1)

{
  void *pvVar1;
  VHACD *pVVar2;
  undefined *__src;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  char cVar6;
  basic_ostream *pbVar7;
  long *plVar8;
  Mesh *pMVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  VHACD *pVVar17;
  VHACD *pVVar18;
  ulong uVar19;
  undefined8 uVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  Mesh *this_00;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined8 local_1368;
  undefined8 uStack_1360;
  void *local_1358;
  undefined **local_1350;
  undefined **local_1348 [8];
  ulong local_1308;
  undefined8 uStack_1300;
  void *local_12f8;
  undefined8 uStack_12f0;
  undefined4 local_12e8;
  undefined **local_12e0 [17];
  undefined8 local_1258;
  undefined4 local_1250;
  undefined auStack_1248 [256];
  undefined *local_1148;
  ulong local_1140;
  ulong local_1138;
  undefined auStack_1130 [256];
  undefined *local_1030;
  ulong local_1028;
  ulong local_1020;
  basic_string local_1018 [4];
  void *local_1008;
  SArray aSStack_698 [1536];
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  if (((byte)this[0x2b8] & 1) == 0) {
    clock_gettime(0,(timespec *)(this + 0x278));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(this + 0x228));
    local_1350 = (undefined **)0xfd8f40;
    local_12e0[0] = (undefined **)0xfd8f68;
    std::__ndk1::ios_base::init(local_12e0);
    local_1258 = 0;
    local_1250 = 0xffffffff;
    local_1350 = &PTR__basic_ostringstream_00fd8ed0;
    local_12e0[0] = &PTR__basic_ostringstream_00fd8ef8;
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
    local_12e8 = 0x10;
    uStack_1300 = 0;
    local_1308 = 0;
    local_1348[0] = &PTR__basic_stringbuf_00fd8fa0;
    uStack_12f0 = 0;
    local_12f8 = (void *)0x0;
    if (*(long *)(param_1 + 0x28) != 0) {
      pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_1350,"+ ",2);
      pVVar17 = *(VHACD **)(this + 0x238);
      uVar19 = *(ulong *)(this + 0x230);
      if (((byte)this[0x228] & 1) == 0) {
        pVVar17 = this + 0x229;
        uVar19 = (ulong)((byte)this[0x228] >> 1);
      }
      pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar7,(char *)pVVar17,uVar19);
      std::__ndk1::ios_base::getloc();
      plVar8 = (long *)std::__ndk1::locale::use_facet((id *)local_1018);
      (**(code **)(*plVar8 + 0x38))(plVar8,10);
      std::__ndk1::locale::~locale((locale *)local_1018);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar7);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      plVar8 = *(long **)(param_1 + 0x28);
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      pvVar1 = (void *)((ulong)local_1018 | 1);
      if (((ushort)local_1018[0] & 1) != 0) {
        pvVar1 = local_1008;
      }
      (**(code **)(*plVar8 + 0x10))(plVar8,pvVar1);
      if (((ushort)local_1018[0] & 1) != 0) {
        operator_delete(local_1008);
      }
    }
    uVar19 = *(ulong *)(this + 0x218);
    if ((1 < uVar19) && (((byte)this[0x2b8] & 1) == 0)) {
      local_88 = 0x40;
      uStack_90 = 0;
      local_98 = 0;
      Mesh::Mesh((Mesh *)local_1018);
      local_1028 = 0;
      uVar13 = uVar19 * uVar19 - uVar19;
      local_1030 = (undefined *)0x0;
      local_1020 = 0x40;
      uVar22 = uVar13 >> 1;
      if (0x81 < uVar13) {
        uVar14 = uVar22 << 2;
        if ((long)uVar13 < 0) {
          uVar14 = 0xffffffffffffffff;
        }
        local_1030 = (undefined *)operator_new__(uVar14);
        local_1020 = uVar22;
      }
      local_1140 = 0;
      local_1148 = (undefined *)0x0;
      local_1138 = 0x40;
      local_1028 = uVar22;
      if (0x40 < uVar19) {
        uVar13 = uVar19 << 2;
        if (uVar19 >> 0x3e != 0) {
          uVar13 = 0xffffffffffffffff;
        }
        local_1148 = (undefined *)operator_new__(uVar13);
        local_1138 = uVar19;
      }
      lVar24 = 0;
      pVVar17 = this + 0x10;
      uVar13 = 1;
      local_1140 = uVar19;
      do {
        puVar10 = local_1148;
        dVar32 = (double)Mesh::ComputeVolume();
        uVar22 = 0;
        if (uVar19 < 0x41) {
          puVar10 = auStack_1248;
        }
        *(float *)(puVar10 + uVar13 * 4) = (float)dVar32;
        uVar14 = local_1020;
        lVar15 = lVar24;
        do {
          pVVar2 = pVVar17;
          if (*(long *)(this + 0x220) != 0x40) {
            pVVar2 = *(VHACD **)(this + 0x210);
          }
          ComputeConvexHull(*(Mesh **)(pVVar2 + uVar13 * 8),*(Mesh **)(pVVar2 + uVar22 * 8),
                            aSStack_698,(Mesh *)local_1018);
          dVar33 = (double)Mesh::ComputeVolume();
          dVar34 = (double)Mesh::ComputeVolume();
          lVar24 = lVar15 + 1;
          uVar22 = uVar22 + 1;
          puVar10 = auStack_1130;
          if (uVar14 != 0x40) {
            puVar10 = local_1030;
          }
          *(float *)(puVar10 + lVar15 * 4) =
               (float)(ABS(dVar34 - (dVar33 + (double)(float)dVar32)) / *(double *)(this + 0x270));
          lVar15 = lVar24;
        } while (uVar13 != uVar22);
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar19);
      if (((byte)this[0x2b8] & 1) == 0) {
        iVar21 = 0;
        uVar19 = *(ulong *)(this + 0x218);
        do {
          local_1368._0_1_ = (id)0x0;
          local_1368._1_1_ = 0;
          std::__ndk1::
          basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str
                    ((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)local_1348,(basic_string *)&local_1368);
          if (((byte)local_1368._0_1_ & 1) != 0) {
            operator_delete(local_1358);
          }
          pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             ((basic_ostream *)&local_1350,"Iteration ",10);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,iVar21);
          std::__ndk1::
          basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
          if ((*(byte *)(this + 0x240) & 1) != 0) {
            operator_delete(*(void **)(this + 0x250));
          }
          puVar10 = auStack_1130;
          if (local_1020 != 0x40) {
            puVar10 = local_1030;
          }
          *(undefined8 *)(this + 0x248) = uStack_1360;
          *(ulong *)(this + 0x240) =
               CONCAT62(local_1368._2_6_,CONCAT11(local_1368._1_1_,local_1368._0_1_));
          *(void **)(this + 0x250) = local_1358;
          if ((int)local_1028 == 0) {
            iVar12 = -1;
            fVar31 = 3.402823e+38;
          }
          else {
            uVar22 = (ulong)(int)local_1028;
            uVar13 = 0;
            if (uVar22 < 2) {
              uVar22 = 1;
            }
            fVar31 = 3.402823e+38;
            iVar11 = -1;
            do {
              fVar30 = *(float *)(puVar10 + uVar13 * 4);
              bVar5 = fVar31 <= fVar30;
              if (bVar5) {
                fVar30 = fVar31;
              }
              fVar31 = fVar30;
              iVar12 = (int)uVar13;
              if (bVar5) {
                iVar12 = iVar11;
              }
              uVar13 = uVar13 + 1;
              iVar11 = iVar12;
            } while (uVar22 != uVar13);
          }
          if (uVar19 < 2) break;
          uVar13 = uVar19 - 1;
          if (uVar13 < *(uint *)(param_1 + 0x54)) {
            dVar32 = *(double *)(param_1 + 0x60);
            if (param_1[0x68] != (Parameters)0x0) {
              dVar32 = dVar32 / *(double *)(this + 0x270);
            }
            if (dVar32 <= (double)fVar31) break;
          }
          uVar23 = (ulong)iVar12;
          lVar24 = (long)((ulong)((int)SQRT((double)(unkuint9)(uVar23 << 3 | 1)) - 1) << 0x20) >>
                   0x21;
          uVar22 = lVar24 + 1;
          uVar14 = uVar22 * lVar24 >> 1;
          uVar29 = uVar23 - uVar14;
          if (*(long *)(param_1 + 0x28) != 0) {
            local_1368._0_1_ = (id)0x0;
            local_1368._1_1_ = 0;
            std::__ndk1::
            basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str
                      ((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)local_1348,(basic_string *)&local_1368);
            if (((byte)local_1368._0_1_ & 1) != 0) {
              operator_delete(local_1358);
            }
            pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               ((basic_ostream *)&local_1350,"\t\t Merging (",0xc);
            pbVar7 = (basic_ostream *)
                     std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                               ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,uVar22)
            ;
            pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar7,", ",2);
            pbVar7 = (basic_ostream *)
                     std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                               ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,uVar29)
            ;
            pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar7,") ",2);
            cVar6 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,fVar31);
            std::__ndk1::ios_base::getloc();
            plVar8 = (long *)std::__ndk1::locale::use_facet((id *)&local_1368);
            (**(code **)(*plVar8 + 0x38))(plVar8,10);
            std::__ndk1::locale::~locale((locale *)&local_1368);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar6);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
            std::__ndk1::ios_base::getloc();
            plVar8 = (long *)std::__ndk1::locale::use_facet((id *)&local_1368);
            (**(code **)(*plVar8 + 0x38))(plVar8,10);
            std::__ndk1::locale::~locale((locale *)&local_1368);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar6);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
            plVar8 = *(long **)(param_1 + 0x28);
            std::__ndk1::
            basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str()
            ;
            pvVar1 = (void *)((ulong)&local_1368 | 1);
            if (((byte)local_1368._0_1_ & 1) != 0) {
              pvVar1 = local_1358;
            }
            (**(code **)(*plVar8 + 0x10))(plVar8,pvVar1);
            if (((byte)local_1368._0_1_ & 1) != 0) {
              operator_delete(local_1358);
            }
          }
          pMVar9 = (Mesh *)operator_new(0x980);
          Mesh::Mesh(pMVar9);
          pVVar2 = pVVar17;
          if (*(long *)(this + 0x220) != 0x40) {
            pVVar2 = *(VHACD **)(this + 0x210);
          }
          ComputeConvexHull(*(Mesh **)(pVVar2 + uVar22 * 8),*(Mesh **)(pVVar2 + uVar29 * 8),
                            aSStack_698,pMVar9);
          lVar15 = *(long *)(this + 0x220);
          pVVar18 = *(VHACD **)(this + 0x210);
          pVVar2 = pVVar17;
          if (lVar15 != 0x40) {
            pVVar2 = pVVar18;
          }
          this_00 = *(Mesh **)(pVVar2 + uVar29 * 8);
          if (this_00 != (Mesh *)0x0) {
            Mesh::~Mesh(this_00);
            operator_delete(this_00);
            lVar15 = *(long *)(this + 0x220);
            pVVar18 = *(VHACD **)(this + 0x210);
          }
          puVar10 = auStack_1248;
          if (local_1138 != 0x40) {
            puVar10 = local_1148;
          }
          pVVar2 = pVVar17;
          if (lVar15 != 0x40) {
            pVVar2 = pVVar18;
          }
          *(Mesh **)(pVVar2 + uVar29 * 8) = pMVar9;
          *(float *)(puVar10 + uVar29 * 4) =
               *(float *)(puVar10 + uVar22 * 4) + *(float *)(puVar10 + uVar29 * 4);
          pVVar18 = *(VHACD **)(this + 0x210);
          pVVar2 = pVVar17;
          if (lVar15 != 0x40) {
            pVVar2 = pVVar18;
          }
          pMVar9 = *(Mesh **)(pVVar2 + uVar22 * 8);
          if (pMVar9 != (Mesh *)0x0) {
            Mesh::~Mesh(pMVar9);
            operator_delete(pMVar9);
            lVar15 = *(long *)(this + 0x220);
            pVVar18 = *(VHACD **)(this + 0x210);
          }
          pVVar2 = pVVar17;
          if (lVar15 != 0x40) {
            pVVar2 = pVVar18;
          }
          lVar15 = *(long *)(this + 0x218) + -1;
          bVar5 = local_1138 != 0x40;
          uVar20 = *(undefined8 *)(pVVar2 + uVar22 * 8);
          *(undefined8 *)(pVVar2 + uVar22 * 8) = *(undefined8 *)(pVVar2 + lVar15 * 8);
          puVar10 = auStack_1248;
          if (bVar5) {
            puVar10 = local_1148;
          }
          *(undefined8 *)(pVVar2 + lVar15 * 8) = uVar20;
          *(undefined4 *)(puVar10 + uVar22 * 4) = *(undefined4 *)(puVar10 + lVar15 * 4);
          *(long *)(this + 0x218) = lVar15;
          puVar10 = auStack_1248;
          if (bVar5) {
            puVar10 = local_1148;
          }
          fVar31 = *(float *)(puVar10 + uVar29 * 4);
          uVar25 = (uVar29 - 1) * uVar29 >> 1;
          if (uVar29 != 0) {
            lVar15 = 0;
            uVar26 = uVar25;
            uVar27 = uVar29;
            do {
              uVar25 = uVar26;
              if (((byte)this[0x2b8] & 1) != 0) break;
              pVVar2 = pVVar17;
              if (*(long *)(this + 0x220) != 0x40) {
                pVVar2 = *(VHACD **)(this + 0x210);
              }
              ComputeConvexHull(*(Mesh **)(pVVar2 + uVar29 * 8),*(Mesh **)(pVVar2 + lVar15),
                                aSStack_698,(Mesh *)local_1018);
              dVar32 = (double)Mesh::ComputeVolume();
              dVar33 = (double)Mesh::ComputeVolume();
              lVar15 = lVar15 + 8;
              puVar10 = auStack_1130;
              if (local_1020 != 0x40) {
                puVar10 = local_1030;
              }
              uVar25 = uVar26 + 1;
              uVar27 = uVar27 - 1;
              *(float *)(puVar10 + uVar26 * 4) =
                   (float)(ABS(dVar33 - (dVar32 + (double)fVar31)) / *(double *)(this + 0x270));
              uVar26 = uVar25;
            } while (uVar27 != 0);
          }
          if (uVar29 + 1 < uVar13) {
            uVar27 = uVar29 + 1;
            lVar15 = uVar25 + uVar29;
            do {
              if (((byte)this[0x2b8] & 1) != 0) break;
              pVVar2 = pVVar17;
              if (*(long *)(this + 0x220) != 0x40) {
                pVVar2 = *(VHACD **)(this + 0x210);
              }
              ComputeConvexHull(*(Mesh **)(pVVar2 + uVar29 * 8),*(Mesh **)(pVVar2 + uVar27 * 8),
                                aSStack_698,(Mesh *)local_1018);
              dVar32 = (double)Mesh::ComputeVolume();
              dVar33 = (double)Mesh::ComputeVolume();
              puVar10 = auStack_1130;
              if (local_1020 != 0x40) {
                puVar10 = local_1030;
              }
              *(float *)(puVar10 + lVar15 * 4) =
                   (float)(ABS(dVar33 - (dVar32 + (double)fVar31)) / *(double *)(this + 0x270));
              lVar15 = uVar27 + lVar15;
              uVar27 = uVar27 + 1;
            } while (uVar27 < uVar13);
          }
          uVar26 = local_1020;
          uVar16 = (uVar19 - 2) * uVar13;
          uVar28 = uVar16 >> 1;
          uVar27 = local_1020;
          uVar29 = uVar22;
          uVar25 = uVar28;
          if (uVar22 < uVar13) {
            for (; local_1020 = uVar27, uVar29 != 0; uVar29 = uVar29 - 1) {
              if (uVar23 != uVar14) {
                puVar10 = auStack_1130;
                if (uVar26 != 0x40) {
                  puVar10 = local_1030;
                }
                *(undefined4 *)(puVar10 + uVar14 * 4) = *(undefined4 *)(puVar10 + uVar25 * 4);
              }
              uVar14 = uVar14 + 1;
              uVar25 = uVar25 + 1;
              uVar27 = local_1020;
            }
            if (lVar24 + 2U < uVar19) {
              uVar23 = lVar24 + 2;
              lVar15 = uVar25 * 4;
              lVar24 = uVar14 + uVar22;
              do {
                lVar15 = lVar15 + 4;
                puVar10 = auStack_1130;
                if (uVar27 != 0x40) {
                  puVar10 = local_1030;
                }
                *(undefined4 *)(puVar10 + lVar24 * 4) = *(undefined4 *)(puVar10 + lVar15);
                lVar24 = uVar23 + lVar24;
                uVar23 = uVar23 + 1;
              } while (uVar23 < uVar19);
            }
          }
          puVar10 = local_1030;
          uVar19 = local_1020;
          if (uVar27 < uVar28) {
            uVar19 = uVar28 << 2;
            if ((long)uVar16 < 0) {
              uVar19 = 0xffffffffffffffff;
            }
            puVar10 = (undefined *)operator_new__(uVar19);
            puVar4 = local_1030;
            __src = auStack_1130;
            if (uVar27 != 0x40) {
              __src = local_1030;
            }
            memcpy(puVar10,__src,local_1028 << 2);
            uVar19 = uVar28;
            if (puVar4 != (undefined *)0x0) {
              operator_delete__(puVar4);
            }
          }
          local_1020 = uVar19;
          local_1030 = puVar10;
          iVar21 = iVar21 + 1;
          uVar19 = uVar13;
          local_1028 = uVar28;
        } while (((byte)this[0x2b8] & 1) == 0);
      }
      if (local_1148 != (undefined *)0x0) {
        operator_delete__(local_1148);
      }
      if (local_1030 != (undefined *)0x0) {
        operator_delete__(local_1030);
      }
      Mesh::~Mesh((Mesh *)local_1018);
      if (local_98 != 0) {
        operator_delete__((void *)(local_98 + -8));
      }
    }
    *(undefined8 *)(this + 600) = 0x4058c00000000000;
    if (((byte)this[0x2b8] & 1) == 0) {
      *(undefined8 *)(this + 0x268) = 0x4059000000000000;
      *(undefined8 *)(this + 0x260) = 0x4059000000000000;
      plVar8 = *(long **)(param_1 + 0x20);
      if (plVar8 != (long *)0x0) {
        pVVar17 = *(VHACD **)(this + 0x238);
        if (((byte)this[0x228] & 1) == 0) {
          pVVar17 = this + 0x229;
        }
        pVVar2 = this + 0x241;
        if (((byte)this[0x240] & 1) != 0) {
          pVVar2 = *(VHACD **)(this + 0x250);
        }
        (**(code **)(*plVar8 + 0x10))
                  (*(undefined8 *)(this + 600),0x4059000000000000,0x4059000000000000,plVar8,pVVar17,
                   pVVar2);
      }
    }
    clock_gettime(0,(timespec *)(this + 0x288));
    if (*(long *)(param_1 + 0x28) != 0) {
      local_1018[0]._0_2_ = 0;
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            local_1348,local_1018);
      if (((ushort)local_1018[0] & 1) != 0) {
        operator_delete(local_1008);
      }
      pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_1350,"\t time ",7);
      dVar32 = (double)NEON_fmadd((double)(*(long *)(this + 0x290) - *(long *)(this + 0x280)),
                                  0x3e112e0be826d695,
                                  (double)(*(long *)(this + 0x288) - *(long *)(this + 0x278)));
      pbVar7 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,
                          (dVar32 * 1000.0) / 1000.0);
      pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar7,"s",1);
      std::__ndk1::ios_base::getloc();
      plVar8 = (long *)std::__ndk1::locale::use_facet((id *)local_1018);
      (**(code **)(*plVar8 + 0x38))(plVar8,10);
      std::__ndk1::locale::~locale((locale *)local_1018);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar7);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      plVar8 = *(long **)(param_1 + 0x28);
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      pvVar1 = (void *)((ulong)local_1018 | 1);
      if (((ushort)local_1018[0] & 1) != 0) {
        pvVar1 = local_1008;
      }
      (**(code **)(*plVar8 + 0x10))(plVar8,pvVar1);
      if (((ushort)local_1018[0] & 1) != 0) {
        operator_delete(local_1008);
      }
    }
    local_12e0[0] = &PTR__basic_ostringstream_00fd8ef8;
    local_1350 = &PTR__basic_ostringstream_00fd8ed0;
    local_1348[0] = &PTR__basic_stringbuf_00fd8fa0;
    if ((local_1308 & 1) != 0) {
      operator_delete(local_12f8);
    }
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
              ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_1348);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1350);
    std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
              ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_12e0);
  }
  if (*(long *)(lVar3 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


