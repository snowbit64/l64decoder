// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PutMaybeModifiable
// Entry Point: 00cd7cfc
// Size: 1668 bytes
// Signature: undefined __thiscall PutMaybeModifiable(FilterWithBufferedInput * this, uchar * param_1, ulong param_2, int param_3, bool param_4, bool param_5)


/* CryptoPP::FilterWithBufferedInput::PutMaybeModifiable(unsigned char*, unsigned long, int, bool,
   bool) */

undefined8 __thiscall
CryptoPP::FilterWithBufferedInput::PutMaybeModifiable
          (FilterWithBufferedInput *this,uchar *param_1,ulong param_2,int param_3,bool param_4,
          bool param_5)

{
  size_t sVar1;
  void *__src;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  BlockingInputOnly *this_00;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  basic_string abStack_88 [2];
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (!param_4) {
    this_00 = (BlockingInputOnly *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cd8340 to 00cd834f has its CatchHandler @ 00cd83a4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               abStack_88,"FilterWithBufferedInput");
                    /* try { // try from 00cd8354 to 00cd837b has its CatchHandler @ 00cd8380 */
    BufferedTransformation::BlockingInputOnly::BlockingInputOnly(this_00,abStack_88);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&BufferedTransformation::BlockingInputOnly::typeinfo,Exception::~Exception);
  }
  if (param_2 == 0) goto LAB_00cd8168;
  uVar8 = *(ulong *)(this + 0x80);
  uVar12 = uVar8 + param_2;
  if (this[0x48] == (FilterWithBufferedInput)0x0) {
    uVar11 = *(ulong *)(this + 0x30);
    if (uVar11 <= uVar12) {
      uVar13 = uVar11 - uVar8;
      if ((param_1 != (uchar *)0x0) && (uVar13 != 0)) {
        lVar5 = *(long *)(this + 0x68) + *(long *)(this + 0x60);
        lVar6 = 0;
        if ((ulong)(lVar5 - *(long *)(this + 0x88)) <= uVar8) {
          lVar6 = *(long *)(this + 0x60);
        }
        pvVar3 = (void *)(*(long *)(this + 0x88) + (uVar8 - lVar6));
        uVar8 = lVar5 - (long)pvVar3;
        sVar1 = uVar8;
        if (uVar13 <= uVar8) {
          sVar1 = uVar13;
        }
        memcpy(pvVar3,param_1,sVar1);
        if (uVar8 < uVar13) {
          memcpy(*(void **)(this + 0x68),param_1 + sVar1,uVar13 - sVar1);
        }
        uVar11 = *(ulong *)(this + 0x30);
        uVar8 = *(long *)(this + 0x80) + uVar13;
        *(ulong *)(this + 0x80) = uVar8;
      }
      lVar5 = *(long *)(this + 0x68) + *(long *)(this + 0x60);
      uVar10 = lVar5 - *(long *)(this + 0x88);
      uVar9 = uVar8;
      if (uVar10 <= uVar8) {
        uVar9 = uVar10;
      }
      if (uVar11 <= uVar9) {
        uVar9 = uVar11;
      }
      lVar6 = *(long *)(this + 0x88) + uVar9;
      *(ulong *)(this + 0x30) = uVar9;
      *(ulong *)(this + 0x80) = uVar8 - uVar9;
      *(long *)(this + 0x88) = lVar6;
      if ((uVar8 - uVar9 == 0) || (lVar6 == lVar5)) {
        *(long *)(this + 0x88) = *(long *)(this + 0x68);
      }
      (**(code **)(*(long *)this + 0x1c8))(this);
      uVar11 = *(ulong *)(this + 0x38);
      uVar9 = 0;
      if (uVar11 != 0) {
        uVar9 = ((*(long *)(this + 0x40) + uVar11 * 2) - 2) / uVar11;
      }
      uVar8 = *(ulong *)(this + 0x60);
      pvVar3 = *(void **)(this + 0x68);
      uVar10 = uVar9 * uVar11;
      if (uVar8 != uVar10) {
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined *)((long)pvVar3 + (uVar8 - 1)) = 0;
        }
        UnalignedDeallocate(pvVar3);
        if (uVar10 == 0) {
          pvVar3 = (void *)0x0;
        }
        else {
          pvVar3 = (void *)UnalignedAllocate(uVar10);
        }
      }
      uVar7 = *(ulong *)(this + 0x38);
      uVar8 = 0;
      param_1 = param_1 + uVar13;
      *(void **)(this + 0x68) = pvVar3;
      *(ulong *)(this + 0x70) = uVar11;
      *(undefined8 *)(this + 0x58) = 0xffffffffffffffff;
      *(ulong *)(this + 0x60) = uVar10;
      uVar12 = uVar12 - *(long *)(this + 0x30);
      *(ulong *)(this + 0x78) = uVar9;
      *(undefined8 *)(this + 0x80) = 0;
      *(void **)(this + 0x88) = pvVar3;
      this[0x48] = (FilterWithBufferedInput)0x1;
      goto joined_r0x00cd7f58;
    }
  }
  else {
    uVar7 = *(ulong *)(this + 0x38);
joined_r0x00cd7f58:
    if (uVar7 == 1) {
      uVar13 = *(ulong *)(this + 0x40);
      uVar11 = uVar12;
      if (*(ulong *)(this + 0x40) < uVar12) {
        while (uVar12 = uVar13, uVar8 != 0) {
          lVar6 = *(long *)(this + 0x88);
          lVar5 = *(long *)(this + 0x68) + *(long *)(this + 0x60);
          uVar9 = lVar5 - lVar6;
          uVar13 = uVar8;
          if (uVar9 <= uVar8) {
            uVar13 = uVar9;
          }
          if (uVar11 - uVar12 <= uVar13) {
            uVar13 = uVar11 - uVar12;
          }
          *(ulong *)(this + 0x80) = uVar8 - uVar13;
          *(ulong *)(this + 0x88) = lVar6 + uVar13;
          if (uVar8 - uVar13 == 0 || lVar6 + uVar13 == lVar5) {
            *(long *)(this + 0x88) = *(long *)(this + 0x68);
          }
          (**(code **)(*(long *)this + 0x1e0))(this,lVar6,uVar13);
          uVar12 = uVar11 - uVar13;
          if (uVar12 <= *(ulong *)(this + 0x40)) goto LAB_00cd80fc;
          uVar13 = *(ulong *)(this + 0x40);
          uVar11 = uVar12;
          uVar8 = *(ulong *)(this + 0x80);
        }
        lVar5 = 0x1e0;
        if (!param_5) {
          lVar5 = 0x1d8;
        }
        (**(code **)(*(long *)this + lVar5))(this,param_1,uVar11 - uVar12);
        param_1 = param_1 + (uVar11 - uVar12);
      }
    }
    else {
      lVar5 = *(long *)(this + 0x40);
      if (lVar5 + uVar7 <= uVar12) {
        if (uVar7 <= uVar8) {
          do {
            uVar11 = *(ulong *)(this + 0x70);
            if (uVar8 < uVar11) {
              lVar6 = 0;
            }
            else {
              lVar6 = *(long *)(this + 0x88);
              lVar5 = *(long *)(this + 0x68);
              if (lVar6 + uVar11 != *(long *)(this + 0x68) + *(long *)(this + 0x60)) {
                lVar5 = lVar6 + uVar11;
              }
              *(ulong *)(this + 0x80) = uVar8 - uVar11;
              *(long *)(this + 0x88) = lVar5;
            }
            (**(code **)(*(long *)this + 0x1e0))(this,lVar6);
            uVar7 = *(ulong *)(this + 0x38);
            lVar5 = *(long *)(this + 0x40);
            uVar12 = uVar12 - uVar7;
            if (uVar12 < lVar5 + uVar7) goto LAB_00cd8090;
            uVar8 = *(ulong *)(this + 0x80);
          } while (uVar7 <= uVar8);
        }
        if (uVar8 != 0) {
          uVar7 = uVar7 - uVar8;
          if ((param_1 != (uchar *)0x0) && (uVar7 != 0)) {
            lVar5 = *(long *)(this + 0x68) + *(long *)(this + 0x60);
            lVar6 = 0;
            if ((ulong)(lVar5 - *(long *)(this + 0x88)) <= uVar8) {
              lVar6 = *(long *)(this + 0x60);
            }
            pvVar3 = (void *)(*(long *)(this + 0x88) + (uVar8 - lVar6));
            uVar8 = lVar5 - (long)pvVar3;
            sVar1 = uVar8;
            if (uVar7 <= uVar8) {
              sVar1 = uVar7;
            }
            memcpy(pvVar3,param_1,sVar1);
            if (uVar8 < uVar7) {
              memcpy(*(void **)(this + 0x68),param_1 + sVar1,uVar7 - sVar1);
            }
            uVar8 = *(long *)(this + 0x80) + uVar7;
            *(ulong *)(this + 0x80) = uVar8;
          }
          uVar11 = *(ulong *)(this + 0x70);
          param_1 = param_1 + uVar7;
          if (uVar8 < uVar11) {
            lVar6 = 0;
          }
          else {
            lVar6 = *(long *)(this + 0x88);
            lVar5 = *(long *)(this + 0x68);
            if (lVar6 + uVar11 != *(long *)(this + 0x68) + *(long *)(this + 0x60)) {
              lVar5 = lVar6 + uVar11;
            }
            *(ulong *)(this + 0x80) = uVar8 - uVar11;
            *(long *)(this + 0x88) = lVar5;
          }
          (**(code **)(*(long *)this + 0x1e0))(this,lVar6,*(undefined8 *)(this + 0x38));
          uVar7 = *(ulong *)(this + 0x38);
          lVar5 = *(long *)(this + 0x40);
          uVar12 = uVar12 - uVar7;
        }
      }
LAB_00cd8090:
      if (lVar5 + uVar7 <= uVar12) {
        uVar15 = NEON_cnt(uVar7,1);
        uVar14 = NEON_uaddlv(uVar15,1);
        if ((int)CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) == 1) {
          uVar8 = uVar12 - lVar5 & -uVar7;
        }
        else {
          uVar8 = 0;
          if (uVar7 != 0) {
            uVar8 = (uVar12 - lVar5) / uVar7;
          }
          uVar8 = uVar8 * uVar7;
        }
        lVar5 = 0x1e0;
        if (!param_5) {
          lVar5 = 0x1d8;
        }
        (**(code **)(*(long *)this + lVar5))(this,param_1,uVar8);
        param_1 = param_1 + uVar8;
        uVar12 = uVar12 - uVar8;
      }
    }
  }
LAB_00cd80fc:
  if (param_1 != (uchar *)0x0) {
    uVar8 = *(ulong *)(this + 0x80);
    uVar12 = uVar12 - uVar8;
    if (uVar12 != 0) {
      lVar5 = *(long *)(this + 0x68) + *(long *)(this + 0x60);
      lVar6 = 0;
      if ((ulong)(lVar5 - *(long *)(this + 0x88)) <= uVar8) {
        lVar6 = *(long *)(this + 0x60);
      }
      pvVar3 = (void *)(*(long *)(this + 0x88) + (uVar8 - lVar6));
      uVar8 = lVar5 - (long)pvVar3;
      sVar1 = uVar8;
      if (uVar12 <= uVar8) {
        sVar1 = uVar12;
      }
      memcpy(pvVar3,param_1,sVar1);
      if (uVar8 < uVar12) {
        memcpy(*(void **)(this + 0x68),param_1 + sVar1,uVar12 - sVar1);
      }
      *(ulong *)(this + 0x80) = *(long *)(this + 0x80) + uVar12;
    }
  }
LAB_00cd8168:
  if (param_3 != 0) {
    if ((this[0x48] == (FilterWithBufferedInput)0x0) && (*(long *)(this + 0x30) == 0)) {
      (**(code **)(*(long *)this + 0x1c8))(this,0);
    }
    uVar12 = *(ulong *)(this + 0x80);
    local_80 = 0xffffffffffffffff;
    uStack_78 = uVar12;
    if (uVar12 == 0) {
      pvVar3 = (void *)0x0;
      local_70 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)UnalignedAllocate(uVar12);
      local_70 = pvVar3;
      if (pvVar3 != (void *)0x0) {
        uVar8 = *(ulong *)(this + 0x80);
        __src = *(void **)(this + 0x88);
        lVar5 = *(long *)(this + 0x68) + *(long *)(this + 0x60);
        uVar11 = lVar5 - (long)__src;
        sVar1 = uVar8;
        if (uVar11 <= uVar8) {
          sVar1 = uVar11;
        }
        if ((ulong)(*(long *)(this + 0x70) * *(long *)(this + 0x78)) <= sVar1) {
          sVar1 = *(long *)(this + 0x70) * *(long *)(this + 0x78);
        }
        *(ulong *)(this + 0x80) = uVar8 - sVar1;
        *(size_t *)(this + 0x88) = (long)__src + sVar1;
        if ((uVar8 - sVar1 == 0) || ((long)__src + sVar1 == lVar5)) {
          *(long *)(this + 0x88) = *(long *)(this + 0x68);
        }
        memcpy(pvVar3,__src,sVar1);
        memcpy((void *)((long)pvVar3 + sVar1),*(void **)(this + 0x88),*(size_t *)(this + 0x80));
        *(undefined8 *)(this + 0x80) = 0;
      }
    }
                    /* try { // try from 00cd8228 to 00cd82c7 has its CatchHandler @ 00cd83bc */
    (**(code **)(*(long *)this + 0x1e8))(this,pvVar3,uVar12);
    uVar12 = *(ulong *)(this + 0x60);
    pvVar3 = *(void **)(this + 0x68);
    this[0x48] = (FilterWithBufferedInput)0x0;
    uVar8 = *(ulong *)(this + 0x30);
    if (uVar12 != uVar8) {
      for (; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined *)((long)pvVar3 + (uVar12 - 1)) = 0;
      }
      UnalignedDeallocate(pvVar3);
      if (uVar8 == 0) {
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = (void *)UnalignedAllocate(uVar8);
      }
    }
    *(ulong *)(this + 0x78) = uVar8;
    *(undefined8 *)(this + 0x80) = 0;
    *(void **)(this + 0x88) = pvVar3;
    *(undefined8 *)(this + 0x58) = 0xffffffffffffffff;
    *(ulong *)(this + 0x60) = uVar8;
    *(void **)(this + 0x68) = pvVar3;
    *(undefined8 *)(this + 0x70) = 1;
    plVar4 = (long *)(**(code **)(*(long *)this + 0x160))(this);
    lVar5 = (**(code **)(*plVar4 + 0x130))(plVar4,&DEFAULT_CHANNEL,0,0,param_3 + -1,1);
    *(uint *)(this + 0x28) = (uint)(lVar5 != 0);
    uVar12 = local_80;
    if (uStack_78 <= local_80) {
      uVar12 = uStack_78;
    }
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined *)((long)local_70 + (uVar12 - 1)) = 0;
    }
                    /* try { // try from 00cd82fc to 00cd82ff has its CatchHandler @ 00cd83b8 */
    UnalignedDeallocate(local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


