// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeACD
// Entry Point: 00ea7744
// Size: 4212 bytes
// Signature: undefined __thiscall ComputeACD(VHACD * this, Parameters * param_1)


/* VHACD::VHACD::ComputeACD(VHACD::IVHACD::Parameters const&) */

void __thiscall VHACD::VHACD::ComputeACD(VHACD *this,Parameters *param_1)

{
  PrimitiveSet **ppPVar1;
  ulong *puVar2;
  VHACD *pVVar3;
  VHACD *pVVar4;
  PrimitiveSet **ppPVar5;
  undefined *puVar6;
  VHACD *pVVar7;
  void *pvVar8;
  VHACD VVar9;
  Parameters PVar10;
  long lVar11;
  undefined *puVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  basic_ostream *pbVar16;
  long *plVar17;
  long *plVar18;
  PrimitiveSet **ppPVar19;
  undefined *__dest;
  Mesh *this_00;
  VHACD *pVVar20;
  PrimitiveSet *pPVar21;
  ulong uVar22;
  ulong uVar23;
  ulong **ppuVar24;
  VHACD *pVVar25;
  long lVar26;
  uint uVar27;
  ulong uVar28;
  ulong **ppuVar29;
  PrimitiveSet **ppPVar30;
  PrimitiveSet **ppPVar31;
  long *plVar32;
  long *plVar33;
  uint uVar34;
  VHACD *pVVar35;
  PrimitiveSet **ppPVar36;
  PrimitiveSetBase **ppPVar37;
  ulong uVar38;
  ulong uVar39;
  PrimitiveSet *pPVar40;
  double dVar41;
  PrimitiveSet *pPVar42;
  undefined8 uVar43;
  PrimitiveSet *pPVar44;
  double local_880;
  undefined **local_878;
  undefined **local_870 [8];
  ulong local_830;
  undefined8 uStack_828;
  void *local_820;
  undefined8 uStack_818;
  undefined4 local_810;
  undefined **local_808 [17];
  undefined8 local_780;
  undefined4 local_778;
  ulong local_770;
  undefined8 uStack_768;
  void *local_760;
  undefined8 uStack_758;
  undefined8 local_750;
  Parameters *pPStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 local_730;
  undefined8 uStack_728;
  undefined8 local_720;
  undefined *puStack_718;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined *local_6e8;
  double *local_6e0;
  VHACD *local_6d8;
  undefined auStack_6c8 [512];
  undefined *local_4c8;
  ulong uStack_4c0;
  ulong local_4b8;
  undefined auStack_4b0 [512];
  undefined *local_2b0;
  ulong uStack_2a8;
  ulong local_2a0;
  PrimitiveSet *local_298 [2];
  void *pvStack_288;
  PrimitiveSet **local_98;
  ulong uStack_90;
  ulong local_88;
  long local_80;
  
  lVar11 = tpidr_el0;
  local_80 = *(long *)(lVar11 + 0x28);
  if (((byte)this[0x2b8] & 1) == 0) {
    plVar33 = *(long **)(param_1 + 0x30);
    if ((plVar33 != (long *)0x0) && (DAT_02123384 == 0)) {
      DAT_02123384 = (**(code **)(*plVar33 + 0x10))(plVar33,"VHACD::ComputeACD");
      plVar33 = *(long **)(param_1 + 0x30);
    }
    if (plVar33 != (long *)0x0) {
      (**(code **)(*plVar33 + 0x18))(plVar33,DAT_02123384);
    }
    clock_gettime(0,(timespec *)(this + 0x278));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(this + 0x228));
    *(undefined8 *)(this + 0x260) = 0;
    local_878 = (undefined **)0xfd8f40;
    local_808[0] = (undefined **)0xfd8f68;
    std::__ndk1::ios_base::init(local_808);
    local_780 = 0;
    local_778 = 0xffffffff;
    local_878 = &PTR__basic_ostringstream_00fd8ed0;
    local_808[0] = &PTR__basic_ostringstream_00fd8ef8;
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
    local_810 = 0x10;
    uStack_828 = 0;
    local_830 = 0;
    uStack_818 = 0;
    local_820 = (void *)0x0;
    local_870[0] = &PTR__basic_stringbuf_00fd8fa0;
    if (*(long *)(param_1 + 0x28) != 0) {
      pbVar16 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          ((basic_ostream *)&local_878,"+ ",2);
      pVVar25 = *(VHACD **)(this + 0x238);
      uVar28 = *(ulong *)(this + 0x230);
      if (((byte)this[0x228] & 1) == 0) {
        pVVar25 = this + 0x229;
        uVar28 = (ulong)((byte)this[0x228] >> 1);
      }
      pbVar16 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar16,(char *)pVVar25,uVar28);
      std::__ndk1::ios_base::getloc();
      plVar17 = (long *)std::__ndk1::locale::use_facet((id *)local_298);
      (**(code **)(*plVar17 + 0x38))(plVar17,10);
      std::__ndk1::locale::~locale((locale *)local_298);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar16);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      plVar17 = *(long **)(param_1 + 0x28);
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      pvVar8 = (void *)((ulong)local_298 | 1);
      if (((ulong)local_298[0] & 1) != 0) {
        pvVar8 = pvStack_288;
      }
      (**(code **)(*plVar17 + 0x10))(plVar17,pvVar8);
      if (((byte)local_298[0] & 1) != 0) {
        operator_delete(pvStack_288);
      }
    }
    uStack_2a8 = 0;
    local_2b0 = (undefined *)0x0;
    uStack_4c0 = 0;
    local_4c8 = (undefined *)0x0;
    local_298[0] = *(PrimitiveSet **)(this + 0x2b0);
    *(undefined8 *)(this + 0x2b0) = 0;
    *(undefined8 *)(this + 0x270) = 0x3ff0000000000000;
    uStack_90 = 1;
    local_98 = (PrimitiveSet **)0x0;
    iVar15 = 1;
    local_88 = 0x40;
    local_2a0 = 0x40;
    local_4b8 = 0x40;
    if (2 < *(uint *)(param_1 + 0x54)) {
      uVar27 = 2;
      do {
        iVar15 = iVar15 + 1;
        uVar27 = uVar27 * 2;
      } while (uVar27 < *(uint *)(param_1 + 0x54));
    }
    uVar27 = *(uint *)(param_1 + 0x58);
    if (uVar27 <= iVar15 + 1U) {
      uVar27 = iVar15 + 1;
    }
    if (param_1[0x70] == (Parameters)0x0) {
      plVar17 = (long *)0x0;
    }
    else {
      plVar17 = (long *)simplejobsystem::SimpleJobSystem::create
                                  (0x10,*(IUserTaskRunner **)(param_1 + 0x38));
    }
    puVar2 = (ulong *)(this + 0x240);
    pVVar25 = this + 0x229;
    uVar34 = 0;
    pVVar3 = this + 0x241;
    bVar13 = true;
    do {
      if ((uVar27 <= uVar34) || (uStack_90 == 0)) break;
      plVar32 = *(long **)(param_1 + 0x30);
      if (plVar32 != (long *)0x0) {
        if (DAT_02123388 == 0) {
          DAT_02123388 = (**(code **)(*plVar32 + 0x10))(plVar32,"VHACD::ComputeACD_Iteration");
          plVar32 = *(long **)(param_1 + 0x30);
        }
        if (plVar32 != (long *)0x0) {
          (**(code **)(*plVar32 + 0x18))(plVar32,DAT_02123388);
        }
      }
      local_770 = local_770 & 0xffffffffffff0000;
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            local_870,(basic_string *)&local_770);
      if ((local_770 & 1) != 0) {
        operator_delete(local_760);
      }
      uVar34 = uVar34 + 1;
      pbVar16 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          ((basic_ostream *)&local_878,"Subdivision level ",0x12);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar16,uVar34);
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      if (((byte)*(VHACD *)puVar2 & 1) != 0) {
        operator_delete(*(void **)(this + 0x250));
      }
      *(undefined8 *)(this + 0x248) = uStack_768;
      *puVar2 = local_770;
      *(void **)(this + 0x250) = local_760;
      if (*(long *)(param_1 + 0x28) != 0) {
        local_770 = local_770 & 0xffffffffffff0000;
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str
                  ((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    *)local_870,(basic_string *)&local_770);
        if ((local_770 & 1) != 0) {
          operator_delete(local_760);
        }
        pbVar16 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            ((basic_ostream *)&local_878,"\t Subdivision level ",0x14);
        cVar14 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar16,uVar34);
        std::__ndk1::ios_base::getloc();
        plVar18 = (long *)std::__ndk1::locale::use_facet((id *)&local_770);
        (**(code **)(*plVar18 + 0x38))(plVar18,10);
        std::__ndk1::locale::~locale((locale *)&local_770);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar14);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
        plVar18 = *(long **)(param_1 + 0x28);
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
        pvVar8 = (void *)((ulong)&local_770 | 1);
        if ((local_770 & 1) != 0) {
          pvVar8 = local_760;
        }
        (**(code **)(*plVar18 + 0x10))(plVar18,pvVar8);
        if ((local_770 & 1) != 0) {
          operator_delete(local_760);
        }
      }
      uVar28 = uStack_90;
      local_880 = 0.0;
      uVar43 = *(undefined8 *)(this + 0x260);
      if (((byte)this[0x2b8] & 1) == 0) {
        *(undefined8 *)(this + 0x260) = uVar43;
        *(undefined8 *)(this + 0x268) = 0;
        plVar18 = *(long **)(param_1 + 0x20);
        if (plVar18 != (long *)0x0) {
          pVVar4 = pVVar25;
          if (((byte)this[0x228] & 1) != 0) {
            pVVar4 = *(VHACD **)(this + 0x238);
          }
          pVVar20 = pVVar3;
          if (((byte)this[0x240] & 1) != 0) {
            pVVar20 = *(VHACD **)(this + 0x250);
          }
          (**(code **)(*plVar18 + 0x10))
                    (*(undefined8 *)(this + 600),uVar43,0,plVar18,pVVar4,pVVar20);
        }
      }
      puStack_718 = auStack_4b0;
      local_6f0 = 0;
      local_720 = 0;
      uVar22 = uVar28 << 4;
      if (uVar28 >> 0x3c != 0) {
        uVar22 = 0xffffffffffffffff;
      }
      local_6e8 = auStack_6c8;
      uStack_708 = 0;
      local_710 = 0;
      uStack_6f8 = 0;
      uStack_700 = 0;
      uStack_768 = 0;
      local_770 = 0;
      uStack_758 = 0;
      local_760 = (void *)0x0;
      local_6e0 = &local_880;
      local_750 = 0;
      uStack_738 = 0;
      uStack_740 = 0;
      uStack_728 = 0;
      local_730 = 0;
      pPStack_748 = param_1;
      local_6d8 = this;
      ppPVar19 = (PrimitiveSet **)operator_new__(uVar22);
      if (uVar28 == 0) {
        if (plVar17 != (long *)0x0) {
          iVar15 = (**(code **)(*plVar17 + 8))(plVar17);
joined_r0x00ea7d24:
          if (iVar15 != 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
        operator_delete__(ppPVar19);
        PVar10 = param_1[0x68];
        dVar41 = *(double *)param_1;
      }
      else {
        ppPVar19[1] = (PrimitiveSet *)&local_770;
        ppPVar36 = local_298;
        if (local_88 != 0x40) {
          ppPVar36 = local_98;
        }
        pPVar21 = *ppPVar36;
        *ppPVar19 = pPVar21;
        if (bVar13) {
          pPVar21[8] = (PrimitiveSet)0x1;
        }
        uVar22 = uVar28 - 1;
        ppPVar36 = ppPVar19;
        if (uVar22 == 0) {
          if (plVar17 != (long *)0x0) {
            do {
              (**(code **)*plVar17)(plVar17,ppPVar36,primitiveSetPendingCallback);
              uVar28 = uVar28 - 1;
              ppPVar36 = ppPVar36 + 2;
joined_r0x00ea7edc:
            } while (uVar28 != 0);
            bVar13 = false;
            iVar15 = (**(code **)(*plVar17 + 8))(plVar17);
            goto joined_r0x00ea7d24;
          }
LAB_00ea7fd4:
          ProcessPrimitiveSet(this,(PrimitiveSetBase *)&local_770,pPVar21);
          lVar26 = uVar28 - 1;
          if (lVar26 != 0) {
            ppPVar37 = (PrimitiveSetBase **)(ppPVar19 + 3);
            do {
              ProcessPrimitiveSet(*(VHACD **)(*ppPVar37 + 0x98),*ppPVar37,
                                  (PrimitiveSet *)ppPVar37[-1]);
              lVar26 = lVar26 + -1;
              ppPVar37 = ppPVar37 + 2;
            } while (lVar26 != 0);
          }
        }
        else {
          ppPVar5 = local_298;
          if (local_88 != 0x40) {
            ppPVar5 = local_98;
          }
          if (uVar22 < 4) {
LAB_00ea7ea0:
            uVar23 = 1;
LAB_00ea7ea4:
            lVar26 = uVar28 - uVar23;
            ppuVar29 = (ulong **)(ppPVar19 + uVar23 * 2 + 1);
            ppuVar24 = (ulong **)(ppPVar5 + uVar23);
            do {
              *ppuVar29 = &local_770;
              lVar26 = lVar26 + -1;
              ppuVar29[-1] = *ppuVar24;
              ppuVar29 = ppuVar29 + 2;
              ppuVar24 = ppuVar24 + 1;
            } while (lVar26 != 0);
          }
          else {
            uVar23 = uVar28 - 2;
            bVar13 = uVar23 >> 0x3c != 0;
            if (((ppPVar19 + 3 + uVar23 * 2 < ppPVar19 + 3) || (bVar13)) ||
               (ppPVar19 + 2 + uVar23 * 2 < ppPVar19 + 2)) goto LAB_00ea7ea0;
            uVar23 = 1;
            if (bVar13) goto LAB_00ea7ea4;
            if ((ppPVar19 + 2 < ppPVar5 + uVar28) && (ppPVar5 + 1 < ppPVar19 + uVar28 * 2))
            goto LAB_00ea7ea0;
            uVar38 = uVar22 & 0xfffffffffffffffc;
            ppPVar30 = ppPVar19 + 6;
            uVar23 = uVar38 | 1;
            ppPVar31 = ppPVar5 + 3;
            uVar39 = uVar38;
            do {
              ppPVar1 = ppPVar31 + -2;
              pPVar44 = ppPVar31[-1];
              pPVar42 = ppPVar31[1];
              pPVar40 = *ppPVar31;
              ppPVar31 = ppPVar31 + 4;
              uVar39 = uVar39 - 4;
              ppPVar30[-4] = *ppPVar1;
              ppPVar30[-3] = (PrimitiveSet *)&local_770;
              ppPVar30[-2] = pPVar44;
              ppPVar30[-1] = (PrimitiveSet *)&local_770;
              *ppPVar30 = pPVar40;
              ppPVar30[1] = (PrimitiveSet *)&local_770;
              ppPVar30[2] = pPVar42;
              ppPVar30[3] = (PrimitiveSet *)&local_770;
              ppPVar30 = ppPVar30 + 8;
            } while (uVar39 != 0);
            if (uVar22 != uVar38) goto LAB_00ea7ea4;
          }
          if (plVar17 != (long *)0x0) goto joined_r0x00ea7edc;
          if (uVar28 != 0) goto LAB_00ea7fd4;
        }
        bVar13 = false;
        operator_delete__(ppPVar19);
        PVar10 = param_1[0x68];
        dVar41 = *(double *)param_1;
      }
      if (PVar10 != (Parameters)0x0) {
        dVar41 = dVar41 / *(double *)(this + 0x270);
      }
      if (((byte)this[0x2b8] & 1) == 0) {
        *(undefined8 *)(this + 0x268) = 0x4059000000000000;
        dVar41 = ((1.0 - local_880) * 95.0) / (1.0 - dVar41);
        *(double *)(this + 0x260) = dVar41;
        plVar18 = *(long **)(param_1 + 0x20);
        if (plVar18 != (long *)0x0) {
          pVVar4 = pVVar25;
          if (((byte)this[0x228] & 1) != 0) {
            pVVar4 = *(VHACD **)(this + 0x238);
          }
          pVVar20 = pVVar3;
          if (((byte)this[0x240] & 1) != 0) {
            pVVar20 = *(VHACD **)(this + 0x250);
          }
          (**(code **)(*plVar18 + 0x10))
                    (*(undefined8 *)(this + 600),dVar41,0x4059000000000000,plVar18,pVVar4,pVVar20);
        }
      }
      uVar22 = local_88;
      uVar28 = uStack_4c0;
      uVar23 = local_4b8;
      if (local_88 < uStack_4c0) {
        if (local_98 != (PrimitiveSet **)0x0) {
          operator_delete__(local_98);
        }
        uVar22 = local_4b8;
        uVar28 = uStack_4c0;
        uVar23 = local_4b8 << 3;
        if (local_4b8 >> 0x3d != 0) {
          uVar23 = 0xffffffffffffffff;
        }
        local_88 = local_4b8;
        local_98 = (PrimitiveSet **)operator_new__(uVar23);
        uVar23 = uVar22;
      }
      ppPVar19 = local_298;
      if (uVar22 != 0x40) {
        ppPVar19 = local_98;
      }
      puVar6 = auStack_6c8;
      if (uVar23 != 0x40) {
        puVar6 = local_4c8;
      }
      uStack_90 = uVar28;
      memcpy(ppPVar19,puVar6,uVar28 << 3);
      uStack_4c0 = 0;
      VVar9 = this[0x2b8];
      std::__ndk1::mutex::~mutex((mutex *)&local_710);
      std::__ndk1::mutex::~mutex((mutex *)&uStack_740);
      std::__ndk1::mutex::~mutex((mutex *)&local_770);
      if (plVar32 != (long *)0x0) {
        (**(code **)(*plVar32 + 0x20))(plVar32);
      }
    } while (((byte)VVar9 & 1) == 0);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x18))(plVar17);
    }
    uVar28 = uStack_90;
    if (uStack_90 != 0) {
      uVar22 = 0;
      uVar23 = uStack_2a8;
      uVar39 = local_2a0;
      do {
        ppPVar19 = local_298;
        if (local_88 != 0x40) {
          ppPVar19 = local_98;
        }
        if (uVar23 == uVar39) {
          uVar38 = uVar39 << 1;
          uVar23 = uVar39 << 4;
          if (uVar38 >> 0x3d != 0) {
            uVar23 = 0xffffffffffffffff;
          }
          __dest = (undefined *)operator_new__(uVar23);
          puVar12 = local_2b0;
          puVar6 = auStack_4b0;
          if (uVar39 != 0x40) {
            puVar6 = local_2b0;
          }
          memcpy(__dest,puVar6,uVar39 << 3);
          uVar23 = uVar39;
          if (puVar12 != (undefined *)0x0) {
            operator_delete__(puVar12);
            uVar23 = uStack_2a8;
          }
          local_2b0 = __dest;
          local_2a0 = uVar38;
          uVar39 = uVar38;
        }
        ppPVar19 = ppPVar19 + uVar22;
        puVar6 = auStack_4b0;
        if (uVar39 != 0x40) {
          puVar6 = local_2b0;
        }
        uVar22 = uVar22 + 1;
        uStack_2a8 = uVar23 + 1;
        *(PrimitiveSet **)(puVar6 + uVar23 * 8) = *ppPVar19;
        uVar23 = uVar23 + 1;
      } while (uVar28 != uVar22);
    }
    uVar28 = uStack_2a8;
    if (((byte)this[0x2b8] & 1) == 0) {
      uVar43 = *(undefined8 *)(this + 0x260);
      *(undefined8 *)(this + 600) = 0x4056800000000000;
      if (((byte)this[0x2b8] & 1) == 0) {
        *(undefined8 *)(this + 0x260) = uVar43;
        *(undefined8 *)(this + 0x268) = 0x4059000000000000;
        plVar17 = *(long **)(param_1 + 0x20);
        if (plVar17 != (long *)0x0) {
          pVVar4 = pVVar25;
          if (((byte)this[0x228] & 1) != 0) {
            pVVar4 = *(VHACD **)(this + 0x238);
          }
          pVVar20 = pVVar3;
          if (((byte)this[0x240] & 1) != 0) {
            pVVar20 = *(VHACD **)(this + 0x250);
          }
          (**(code **)(*plVar17 + 0x10))
                    (*(undefined8 *)(this + 600),uVar43,0x4059000000000000,plVar17,pVVar4,pVVar20);
        }
      }
      local_770 = local_770 & 0xffffffffffff0000;
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            local_870,(basic_string *)&local_770);
      if ((local_770 & 1) != 0) {
        operator_delete(local_760);
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_878,"Generate convex-hulls",0x15);
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      if (((byte)*(VHACD *)puVar2 & 1) != 0) {
        operator_delete(*(void **)(this + 0x250));
      }
      uVar28 = uStack_2a8;
      *(undefined8 *)(this + 0x248) = uStack_768;
      *puVar2 = local_770;
      *(void **)(this + 0x250) = local_760;
      if (*(long *)(param_1 + 0x28) != 0) {
        local_770 = local_770 & 0xffffffffffff0000;
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str
                  ((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    *)local_870,(basic_string *)&local_770);
        if ((local_770 & 1) != 0) {
          operator_delete(local_760);
        }
        pbVar16 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            ((basic_ostream *)&local_878,"+ Generate ",0xb);
        pbVar16 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar16,uVar28);
        pbVar16 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar16," convex-hulls ",0xe);
        std::__ndk1::ios_base::getloc();
        plVar17 = (long *)std::__ndk1::locale::use_facet((id *)&local_770);
        (**(code **)(*plVar17 + 0x38))(plVar17,10);
        std::__ndk1::locale::~locale((locale *)&local_770);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar16);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
        plVar17 = *(long **)(param_1 + 0x28);
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
        pvVar8 = (void *)((ulong)&local_770 | 1);
        if ((local_770 & 1) != 0) {
          pvVar8 = local_760;
        }
        (**(code **)(*plVar17 + 0x10))(plVar17,pvVar8);
        if ((local_770 & 1) != 0) {
          operator_delete(local_760);
        }
      }
      uVar43 = *(undefined8 *)(this + 0x260);
      if (((byte)this[0x2b8] & 1) == 0) {
        *(undefined8 *)(this + 0x260) = uVar43;
        *(undefined8 *)(this + 0x268) = 0;
        plVar17 = *(long **)(param_1 + 0x20);
        if (plVar17 != (long *)0x0) {
          pVVar4 = pVVar25;
          if (((byte)this[0x228] & 1) != 0) {
            pVVar4 = *(VHACD **)(this + 0x238);
          }
          pVVar20 = pVVar3;
          if (((byte)this[0x240] & 1) != 0) {
            pVVar20 = *(VHACD **)(this + 0x250);
          }
          (**(code **)(*plVar17 + 0x10))
                    (*(undefined8 *)(this + 600),uVar43,0,plVar17,pVVar4,pVVar20);
        }
      }
      *(undefined8 *)(this + 0x218) = 0;
      if (uVar28 != 0) {
        uVar22 = 0;
        pVVar4 = this + 0x10;
        do {
          if (((byte)this[0x2b8] & 1) != 0) break;
          if (((byte)this[0x2b8] & 1) == 0) {
            *(undefined8 *)(this + 0x260) = *(undefined8 *)(this + 0x260);
            *(double *)(this + 0x268) =
                 ((double)(unkuint9)uVar22 * 100.0) / (double)(unkuint9)uVar28;
            plVar17 = *(long **)(param_1 + 0x20);
            if (plVar17 != (long *)0x0) {
              pVVar20 = pVVar25;
              if (((byte)this[0x228] & 1) != 0) {
                pVVar20 = *(VHACD **)(this + 0x238);
              }
              pVVar7 = pVVar3;
              if (((byte)this[0x240] & 1) != 0) {
                pVVar7 = *(VHACD **)(this + 0x250);
              }
              (**(code **)(*plVar17 + 0x10))(*(undefined8 *)(this + 600),plVar17,pVVar20,pVVar7);
            }
          }
          this_00 = (Mesh *)operator_new(0x980);
          Mesh::Mesh(this_00);
          uVar23 = *(ulong *)(this + 0x218);
          uVar39 = *(ulong *)(this + 0x220);
          if (uVar23 == uVar39) {
            uVar39 = uVar23 << 1;
            uVar38 = uVar23 << 4;
            if (uVar39 >> 0x3d != 0) {
              uVar38 = 0xffffffffffffffff;
            }
            pVVar20 = (VHACD *)operator_new__(uVar38);
            pVVar35 = *(VHACD **)(this + 0x210);
            pVVar7 = pVVar4;
            if (uVar23 != 0x40) {
              pVVar7 = pVVar35;
            }
            memcpy(pVVar20,pVVar7,uVar23 << 3);
            if (pVVar35 != (VHACD *)0x0) {
              operator_delete__(pVVar35);
              uVar23 = *(ulong *)(this + 0x218);
            }
            *(VHACD **)(this + 0x210) = pVVar20;
            *(ulong *)(this + 0x220) = uVar39;
          }
          else {
            pVVar20 = *(VHACD **)(this + 0x210);
          }
          pVVar7 = pVVar4;
          if (uVar39 != 0x40) {
            pVVar7 = pVVar20;
          }
          *(ulong *)(this + 0x218) = uVar23 + 1;
          *(Mesh **)(pVVar7 + uVar23 * 8) = this_00;
          pVVar20 = pVVar4;
          if (uVar39 != 0x40) {
            pVVar20 = *(VHACD **)(this + 0x210);
          }
          puVar6 = auStack_4b0;
          if (local_2a0 != 0x40) {
            puVar6 = local_2b0;
          }
          (**(code **)(**(long **)(puVar6 + uVar22 * 8) + 0x70))
                    (*(long **)(puVar6 + uVar22 * 8),*(undefined8 *)(pVVar20 + uVar22 * 8),1);
          uVar22 = uVar22 + 1;
        } while (uVar28 != uVar22);
      }
      uVar28 = uStack_2a8;
      if (uStack_2a8 != 0) {
        uVar22 = 0;
        uVar23 = local_2a0;
        do {
          puVar6 = auStack_4b0;
          if (uVar23 != 0x40) {
            puVar6 = local_2b0;
          }
          if (*(long **)(puVar6 + uVar22 * 8) != (long *)0x0) {
            (**(code **)(**(long **)(puVar6 + uVar22 * 8) + 8))();
            uVar23 = local_2a0;
          }
          puVar6 = auStack_4b0;
          if (uVar23 != 0x40) {
            puVar6 = local_2b0;
          }
          *(undefined8 *)(puVar6 + uVar22 * 8) = 0;
          uVar22 = uVar22 + 1;
        } while (uVar28 != uVar22);
      }
      uStack_2a8 = 0;
      *(undefined8 *)(this + 600) = 0x4057c00000000000;
      if (((byte)this[0x2b8] & 1) == 0) {
        *(undefined8 *)(this + 0x268) = 0x4059000000000000;
        *(undefined8 *)(this + 0x260) = 0x4059000000000000;
        plVar17 = *(long **)(param_1 + 0x20);
        if (plVar17 != (long *)0x0) {
          if (((byte)this[0x228] & 1) != 0) {
            pVVar25 = *(VHACD **)(this + 0x238);
          }
          if (((byte)this[0x240] & 1) != 0) {
            pVVar3 = *(VHACD **)(this + 0x250);
          }
          (**(code **)(*plVar17 + 0x10))
                    (*(undefined8 *)(this + 600),0x4059000000000000,0x4059000000000000,plVar17,
                     pVVar25,pVVar3);
        }
      }
      clock_gettime(0,(timespec *)(this + 0x288));
      if (*(long *)(param_1 + 0x28) != 0) {
        local_770 = local_770 & 0xffffffffffff0000;
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str
                  ((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    *)local_870,(basic_string *)&local_770);
        if ((local_770 & 1) != 0) {
          operator_delete(local_760);
        }
        pbVar16 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            ((basic_ostream *)&local_878,"\t time ",7);
        dVar41 = (double)NEON_fmadd((double)(*(long *)(this + 0x290) - *(long *)(this + 0x280)),
                                    0x3e112e0be826d695,
                                    (double)(*(long *)(this + 0x288) - *(long *)(this + 0x278)));
        pbVar16 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar16,
                             (dVar41 * 1000.0) / 1000.0);
        pbVar16 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar16,"s",1);
        std::__ndk1::ios_base::getloc();
        plVar17 = (long *)std::__ndk1::locale::use_facet((id *)&local_770);
        (**(code **)(*plVar17 + 0x38))(plVar17,10);
        std::__ndk1::locale::~locale((locale *)&local_770);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar16);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
        plVar17 = *(long **)(param_1 + 0x28);
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
        pvVar8 = (void *)((ulong)&local_770 | 1);
        if ((local_770 & 1) != 0) {
          pvVar8 = local_760;
        }
        (**(code **)(*plVar17 + 0x10))(plVar17,pvVar8);
        if ((local_770 & 1) != 0) {
          operator_delete(local_760);
        }
      }
    }
    else if (uStack_2a8 != 0) {
      uVar22 = 0;
      do {
        puVar6 = auStack_4b0;
        if (local_2a0 != 0x40) {
          puVar6 = local_2b0;
        }
        if (*(long **)(puVar6 + uVar22 * 8) != (long *)0x0) {
          (**(code **)(**(long **)(puVar6 + uVar22 * 8) + 8))();
        }
        uVar22 = uVar22 + 1;
      } while (uVar28 != uVar22);
    }
    if (local_4c8 != (undefined *)0x0) {
      operator_delete__(local_4c8);
    }
    if (local_2b0 != (undefined *)0x0) {
      operator_delete__(local_2b0);
    }
    if (local_98 != (PrimitiveSet **)0x0) {
      operator_delete__(local_98);
    }
    local_808[0] = &PTR__basic_ostringstream_00fd8ef8;
    local_878 = &PTR__basic_ostringstream_00fd8ed0;
    local_870[0] = &PTR__basic_stringbuf_00fd8fa0;
    if ((local_830 & 1) != 0) {
      operator_delete(local_820);
    }
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
              ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_870);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_878);
    std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
              ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_808);
    if (plVar33 != (long *)0x0) {
      (**(code **)(*plVar33 + 0x20))(plVar33);
    }
  }
  if (*(long *)(lVar11 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


