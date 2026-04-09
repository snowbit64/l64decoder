// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SimplifyConvexHulls
// Entry Point: 00ea9128
// Size: 1804 bytes
// Signature: undefined __thiscall SimplifyConvexHulls(VHACD * this, Parameters * param_1)


/* VHACD::VHACD::SimplifyConvexHulls(VHACD::IVHACD::Parameters const&) */

void __thiscall VHACD::VHACD::SimplifyConvexHulls(VHACD *this,Parameters *param_1)

{
  void *pvVar1;
  long lVar2;
  basic_ostream *pbVar3;
  long *plVar4;
  VHACD *pVVar5;
  long lVar6;
  VHACD *pVVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  ushort local_1a0;
  void *local_190;
  undefined **local_188;
  undefined **local_180 [8];
  ulong local_140;
  undefined8 uStack_138;
  void *local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined **local_118 [17];
  undefined8 local_90;
  undefined4 local_88;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  if ((((byte)this[0x2b8] & 1) == 0) && (3 < *(uint *)(param_1 + 0x44))) {
    plVar8 = *(long **)(param_1 + 0x30);
    if ((plVar8 != (long *)0x0) && (DAT_0212338c == 0)) {
      DAT_0212338c = (**(code **)(*plVar8 + 0x10))(plVar8,"VHACD::SimplifyConvexHulls");
      plVar8 = *(long **)(param_1 + 0x30);
    }
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))(plVar8,DAT_0212338c);
    }
    clock_gettime(0,(timespec *)(this + 0x278));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(this + 0x228));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(this + 0x240));
    local_188 = (undefined **)0xfd8f40;
    local_118[0] = (undefined **)0xfd8f68;
    std::__ndk1::ios_base::init(local_118);
    local_90 = 0;
    local_88 = 0xffffffff;
    local_188 = &PTR__basic_ostringstream_00fd8ed0;
    local_118[0] = &PTR__basic_ostringstream_00fd8ef8;
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
    local_120 = 0x10;
    uVar9 = *(ulong *)(this + 0x218);
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    local_130 = (void *)0x0;
    local_180[0] = &PTR__basic_stringbuf_00fd8fa0;
    if (*(long *)(param_1 + 0x28) != 0) {
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_188,"+ Simplify ",0xb);
      pbVar3 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,uVar9);
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar3," convex-hulls ",0xe);
      std::__ndk1::ios_base::getloc();
      plVar4 = (long *)std::__ndk1::locale::use_facet((id *)&local_1a0);
      (**(code **)(*plVar4 + 0x38))(plVar4,10);
      std::__ndk1::locale::~locale((locale *)&local_1a0);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      plVar4 = *(long **)(param_1 + 0x28);
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      pvVar1 = (void *)((ulong)&local_1a0 | 1);
      if ((local_1a0 & 1) != 0) {
        pvVar1 = local_190;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4,pvVar1);
      if ((local_1a0 & 1) != 0) {
        operator_delete(local_190);
      }
    }
    if (((byte)this[0x2b8] & 1) == 0) {
      *(undefined8 *)(this + 0x268) = 0;
      *(undefined8 *)(this + 0x260) = 0;
      plVar4 = *(long **)(param_1 + 0x20);
      if (plVar4 != (long *)0x0) {
        pVVar5 = *(VHACD **)(this + 0x238);
        pVVar7 = *(VHACD **)(this + 0x250);
        if (((byte)this[0x228] & 1) == 0) {
          pVVar5 = this + 0x229;
        }
        if (((byte)this[0x240] & 1) == 0) {
          pVVar7 = this + 0x241;
        }
        (**(code **)(*plVar4 + 0x10))(*(undefined8 *)(this + 600),0,0,plVar4,pVVar5,pVVar7);
      }
    }
    if (uVar9 != 0) {
      uVar10 = 0;
      pVVar5 = this + 0x10;
      do {
        if (((byte)this[0x2b8] & 1) != 0) break;
        if (*(long *)(param_1 + 0x28) != 0) {
          local_1a0 = 0;
          std::__ndk1::
          basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str
                    ((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)local_180,(basic_string *)&local_1a0);
          if ((local_1a0 & 1) != 0) {
            operator_delete(local_190);
          }
          plVar4 = (long *)std::__ndk1::
                           __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                     ((basic_ostream *)&local_188,"\t\t Simplify CH[",0xf);
          lVar6 = *plVar4;
          *(undefined4 *)((long)plVar4 + *(long *)(lVar6 + -0x18) + 0x90) = 0x30;
          *(undefined8 *)((long)plVar4 + *(long *)(lVar6 + -0x18) + 0x18) = 5;
          pbVar3 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             ((basic_ostream<char,std::__ndk1::char_traits<char>> *)plVar4,uVar10);
          pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar3,"] ",2);
          pVVar7 = pVVar5;
          if (*(long *)(this + 0x220) != 0x40) {
            pVVar7 = *(VHACD **)(this + 0x210);
          }
          pbVar3 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                              *(ulong *)(*(long *)(pVVar7 + uVar10 * 8) + 0x608));
          pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar3," V, ",4);
          pVVar7 = pVVar5;
          if (*(long *)(this + 0x220) != 0x40) {
            pVVar7 = *(VHACD **)(this + 0x210);
          }
          pbVar3 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                              *(ulong *)(*(long *)(pVVar7 + uVar10 * 8) + 0x920));
          pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar3," T",2);
          std::__ndk1::ios_base::getloc();
          plVar4 = (long *)std::__ndk1::locale::use_facet((id *)&local_1a0);
          (**(code **)(*plVar4 + 0x38))(plVar4,10);
          std::__ndk1::locale::~locale((locale *)&local_1a0);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
          plVar4 = *(long **)(param_1 + 0x28);
          std::__ndk1::
          basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
          pvVar1 = (void *)((ulong)&local_1a0 | 1);
          if ((local_1a0 & 1) != 0) {
            pvVar1 = local_190;
          }
          (**(code **)(*plVar4 + 0x10))(plVar4,pvVar1);
          if ((local_1a0 & 1) != 0) {
            operator_delete(local_190);
          }
        }
        plVar4 = *(long **)(param_1 + 0x30);
        if ((plVar4 != (long *)0x0) && (DAT_02123390 == 0)) {
          DAT_02123390 = (**(code **)(*plVar4 + 0x10))(plVar4,"VHACD::SimplifyConvexHull");
          plVar4 = *(long **)(param_1 + 0x30);
        }
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x18))(plVar4,DAT_02123390);
        }
        dVar11 = *(double *)(this + 0x270);
        pVVar7 = pVVar5;
        if (*(long *)(this + 0x220) != 0x40) {
          pVVar7 = *(VHACD **)(this + 0x210);
        }
        if (param_1[0x68] != (Parameters)0x0) {
          dVar11 = 1.0;
        }
        SimplifyConvexHull(this,*(Mesh **)(pVVar7 + uVar10 * 8),(ulong)*(uint *)(param_1 + 0x44),
                           *(double *)(param_1 + 0x18) * dVar11);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x20))(plVar4);
        }
        uVar10 = uVar10 + 1;
      } while (uVar9 != uVar10);
    }
    *(undefined8 *)(this + 600) = 0x4059000000000000;
    if (((byte)this[0x2b8] & 1) == 0) {
      *(undefined8 *)(this + 0x268) = 0x4059000000000000;
      *(undefined8 *)(this + 0x260) = 0x4059000000000000;
      plVar4 = *(long **)(param_1 + 0x20);
      if (plVar4 != (long *)0x0) {
        pVVar5 = *(VHACD **)(this + 0x238);
        pVVar7 = *(VHACD **)(this + 0x250);
        if (((byte)this[0x228] & 1) == 0) {
          pVVar5 = this + 0x229;
        }
        if (((byte)this[0x240] & 1) == 0) {
          pVVar7 = this + 0x241;
        }
        (**(code **)(*plVar4 + 0x10))
                  (*(undefined8 *)(this + 600),0x4059000000000000,0x4059000000000000,plVar4,pVVar5,
                   pVVar7);
      }
    }
    clock_gettime(0,(timespec *)(this + 0x288));
    if (*(long *)(param_1 + 0x28) != 0) {
      local_1a0 = 0;
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            local_180,(basic_string *)&local_1a0);
      if ((local_1a0 & 1) != 0) {
        operator_delete(local_190);
      }
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_188,"\t time ",7);
      dVar11 = (double)NEON_fmadd((double)(*(long *)(this + 0x290) - *(long *)(this + 0x280)),
                                  0x3e112e0be826d695,
                                  (double)(*(long *)(this + 0x288) - *(long *)(this + 0x278)));
      pbVar3 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                          (dVar11 * 1000.0) / 1000.0);
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar3,"s",1);
      std::__ndk1::ios_base::getloc();
      plVar4 = (long *)std::__ndk1::locale::use_facet((id *)&local_1a0);
      (**(code **)(*plVar4 + 0x38))(plVar4,10);
      std::__ndk1::locale::~locale((locale *)&local_1a0);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      plVar4 = *(long **)(param_1 + 0x28);
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      pvVar1 = (void *)((ulong)&local_1a0 | 1);
      if ((local_1a0 & 1) != 0) {
        pvVar1 = local_190;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4,pvVar1);
      if ((local_1a0 & 1) != 0) {
        operator_delete(local_190);
      }
    }
    local_118[0] = &PTR__basic_ostringstream_00fd8ef8;
    local_188 = &PTR__basic_ostringstream_00fd8ed0;
    local_180[0] = &PTR__basic_stringbuf_00fd8fa0;
    if ((local_140 & 1) != 0) {
      operator_delete(local_130);
    }
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
              ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_180);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_188);
    std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
              ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_118);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


