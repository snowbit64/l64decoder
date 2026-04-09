// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LastPut
// Entry Point: 00cd980c
// Size: 2024 bytes
// Signature: undefined __thiscall LastPut(StreamTransformationFilter * this, uchar * param_1, ulong param_2)


/* WARNING: Type propagation algorithm not settling */
/* CryptoPP::StreamTransformationFilter::LastPut(unsigned char const*, unsigned long) */

void __thiscall
CryptoPP::StreamTransformationFilter::LastPut
          (StreamTransformationFilter *this,uchar *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  uchar uVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  uchar *__dest;
  BufferedTransformation *pBVar8;
  uchar *puVar9;
  InvalidDataFormat *this_00;
  InvalidCiphertext *pIVar10;
  size_t sVar11;
  size_t __n;
  ulong uVar12;
  code *pcVar13;
  long lVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong local_70 [3];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  puVar9 = param_1;
  if (this[0xd0] == (StreamTransformationFilter)0x0) {
    if (2 < *(uint *)(this + 0xc0) - 2) {
      if ((1 < *(uint *)(this + 0xc0)) || (param_2 == 0)) goto LAB_00cd99fc;
      uVar6 = (**(code **)(**(long **)(this + 0xb8) + 0x58))();
      uVar12 = (ulong)uVar6;
      uVar16 = (**(code **)(**(long **)(this + 0xb8) + 0x80))(*(long **)(this + 0xb8));
      if (((uVar16 & 1) == 0) || (*(int *)(this + 0xc0) != 1)) {
        if (uVar6 == 0) {
          this_00 = (InvalidDataFormat *)__cxa_allocate_exception(0x28);
          if ((uVar16 & 1) != 0) {
                    /* try { // try from 00cd9f3c to 00cd9f4b has its CatchHandler @ 00cda02c */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)local_70,
                       "StreamTransformationFilter: plaintext length is not a multiple of block size and NO_PADDING is specified"
                      );
                    /* try { // try from 00cd9f50 to 00cd9f77 has its CatchHandler @ 00cda01c */
            InvalidDataFormat::InvalidDataFormat(this_00,(basic_string *)local_70);
                    /* WARNING: Subroutine does not return */
            __cxa_throw(this_00,&InvalidDataFormat::typeinfo,Exception::~Exception);
          }
                    /* try { // try from 00cd9fc8 to 00cd9fd7 has its CatchHandler @ 00cda018 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)local_70,
                     "StreamTransformationFilter: ciphertext length is not a multiple of block size"
                    );
                    /* try { // try from 00cd9fdc to 00cda003 has its CatchHandler @ 00cda008 */
          InvalidCiphertext::InvalidCiphertext
                    ((InvalidCiphertext *)this_00,(basic_string *)local_70);
                    /* WARNING: Subroutine does not return */
          __cxa_throw(this_00,&InvalidCiphertext::typeinfo,Exception::~Exception);
        }
      }
      else if ((uVar6 == 0) || (param_2 < uVar12)) {
        uVar16 = (ulong)*(uint *)(this + 0xc4);
        if (*(uint *)(this + 0xc4) <= uVar12) {
          uVar16 = uVar12;
        }
        pBVar8 = (BufferedTransformation *)(**(code **)(*(long *)this + 0x160))(this);
        puVar9 = (uchar *)FilterPutSpaceHelper::HelpCreatePutSpace
                                    ((FilterPutSpaceHelper *)(this + 0x90),pBVar8,
                                     (basic_string *)&DEFAULT_CHANNEL,uVar16);
        if (param_1 != (uchar *)0x0) {
          memcpy(puVar9,param_1,param_2);
        }
        memset(puVar9 + param_2,0,uVar16 - param_2);
        plVar7 = *(long **)(this + 0xb8);
        pcVar13 = *(code **)(*plVar7 + 0x50);
        uVar12 = uVar16;
        __dest = puVar9;
        goto LAB_00cd99c8;
      }
      plVar7 = (long *)(**(code **)(*(long *)this + 0x160))(this);
      uVar6 = *(uint *)(this + 200);
      uVar16 = (ulong)uVar6;
      local_70[0] = param_2;
      if (*(ulong *)(this + 0xa8) < param_2) {
        __dest = (uchar *)(**(code **)(*plVar7 + 0x128))(plVar7,&DEFAULT_CHANNEL,local_70);
        if (local_70[0] < param_2) {
          uVar12 = *(ulong *)(this + 0xa8);
          __dest = *(uchar **)(this + 0xb0);
          if (uVar12 != uVar16) {
            for (; uVar12 != 0; uVar12 = uVar12 - 1) {
              __dest[uVar12 - 1] = '\0';
            }
            UnalignedDeallocate(__dest);
            if (uVar6 == 0) {
              __dest = (uchar *)0x0;
            }
            else {
              __dest = (uchar *)UnalignedAllocate(uVar16);
            }
            *(uchar **)(this + 0xb0) = __dest;
          }
          *(undefined8 *)(this + 0xa0) = 0xffffffffffffffff;
          *(ulong *)(this + 0xa8) = uVar16;
        }
      }
      else {
        __dest = *(uchar **)(this + 0xb0);
      }
      plVar7 = *(long **)(this + 0xb8);
      pcVar13 = *(code **)(*plVar7 + 0x50);
      uVar16 = param_2;
      uVar12 = param_2;
      goto LAB_00cd99c8;
    }
    uVar6 = *(uint *)(this + 0xc4);
    uVar16 = (ulong)uVar6;
    plVar7 = (long *)(**(code **)(*(long *)this + 0x160))(this);
    uVar2 = *(uint *)(this + 200);
    uVar12 = (ulong)uVar2;
    local_70[0] = uVar16;
    if (*(ulong *)(this + 0xa8) < uVar16) {
      __dest = (uchar *)(**(code **)(*plVar7 + 0x128))(plVar7,&DEFAULT_CHANNEL,local_70);
      if (uVar16 <= local_70[0]) {
        uVar12 = (**(code **)(**(long **)(this + 0xb8) + 0x80))();
        goto joined_r0x00cd9b18;
      }
      uVar1 = *(ulong *)(this + 0xa8);
      __dest = *(uchar **)(this + 0xb0);
      if (uVar1 != uVar12) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          __dest[uVar1 - 1] = '\0';
        }
        UnalignedDeallocate(__dest);
        if (uVar2 == 0) {
          __dest = (uchar *)0x0;
        }
        else {
          __dest = (uchar *)UnalignedAllocate(uVar12);
        }
        *(uchar **)(this + 0xb0) = __dest;
        *(undefined8 *)(this + 0xa0) = 0xffffffffffffffff;
        *(ulong *)(this + 0xa8) = uVar12;
        uVar12 = (**(code **)(**(long **)(this + 0xb8) + 0x80))();
        goto joined_r0x00cd9b18;
      }
      *(undefined8 *)(this + 0xa0) = 0xffffffffffffffff;
      *(ulong *)(this + 0xa8) = uVar12;
      uVar12 = (**(code **)(**(long **)(this + 0xb8) + 0x80))();
      if ((uVar12 & 1) != 0) goto LAB_00cd9b1c;
LAB_00cd9bb0:
      if (uVar16 != param_2) {
        pIVar10 = (InvalidCiphertext *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cd9ea0 to 00cd9eaf has its CatchHandler @ 00cda088 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )local_70,
                   "StreamTransformationFilter: ciphertext length is not a multiple of block size");
                    /* try { // try from 00cd9eb4 to 00cd9edb has its CatchHandler @ 00cda06c */
        InvalidCiphertext::InvalidCiphertext(pIVar10,(basic_string *)local_70);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(pIVar10,&InvalidCiphertext::typeinfo,Exception::~Exception);
      }
      (**(code **)(**(long **)(this + 0xb8) + 0x48))(*(long **)(this + 0xb8),__dest,param_1,param_2)
      ;
      if (*(int *)(this + 0xc0) == 2) {
        bVar3 = __dest[uVar6 - 1];
        if ((bVar3 == 0) || (uVar6 < bVar3)) {
LAB_00cd9ee0:
          pIVar10 = (InvalidCiphertext *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cd9eec to 00cd9efb has its CatchHandler @ 00cda068 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)local_70,"StreamTransformationFilter: invalid PKCS #7 block padding found");
                    /* try { // try from 00cd9f00 to 00cd9f27 has its CatchHandler @ 00cda058 */
          InvalidCiphertext::InvalidCiphertext(pIVar10,(basic_string *)local_70);
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pIVar10,&InvalidCiphertext::typeinfo,Exception::~Exception);
        }
        uVar16 = (ulong)(uVar6 - bVar3);
        pbVar15 = __dest + uVar16;
        lVar14 = param_2 - uVar16;
        do {
          if ((uint)bVar3 != (uint)*pbVar15) {
            if (lVar14 != 0) goto LAB_00cd9ee0;
            break;
          }
          pbVar15 = pbVar15 + 1;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      else {
        uVar12 = param_2;
        if (*(int *)(this + 0xc0) == 4) {
          bVar3 = __dest[uVar6 - 1];
          if ((bVar3 == 0) || (uVar6 < bVar3)) {
            pIVar10 = (InvalidCiphertext *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cd9f88 to 00cd9f97 has its CatchHandler @ 00cda040 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)local_70,"StreamTransformationFilter: invalid W3C block padding found");
                    /* try { // try from 00cd9f9c to 00cd9fc3 has its CatchHandler @ 00cda030 */
            InvalidCiphertext::InvalidCiphertext(pIVar10,(basic_string *)local_70);
                    /* WARNING: Subroutine does not return */
            __cxa_throw(pIVar10,&InvalidCiphertext::typeinfo,Exception::~Exception);
          }
          uVar16 = (ulong)(uVar6 - bVar3);
        }
        else {
          do {
            uVar16 = uVar12 - 1;
            if (uVar12 == 0 || uVar16 == 0) {
              uVar16 = -(ulong)(param_2 == 0);
              uVar4 = __dest[-(ulong)(param_2 == 0)];
              break;
            }
            uVar4 = __dest[uVar12 - 1];
            uVar12 = uVar16;
          } while (uVar4 == '\0');
          if (uVar4 != 0x80) {
            pIVar10 = (InvalidCiphertext *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cd9d9c to 00cd9dab has its CatchHandler @ 00cda054 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)local_70,
                       "StreamTransformationFilter: invalid ones-and-zeros padding found");
                    /* try { // try from 00cd9db0 to 00cd9dd7 has its CatchHandler @ 00cda044 */
            InvalidCiphertext::InvalidCiphertext(pIVar10,(basic_string *)local_70);
                    /* WARNING: Subroutine does not return */
            __cxa_throw(pIVar10,&InvalidCiphertext::typeinfo,Exception::~Exception);
          }
        }
      }
      plVar7 = (long *)(**(code **)(*(long *)this + 0x160))(this);
      lVar14 = *plVar7;
    }
    else {
      __dest = *(uchar **)(this + 0xb0);
      uVar12 = (**(code **)(**(long **)(this + 0xb8) + 0x80))();
joined_r0x00cd9b18:
      if ((uVar12 & 1) == 0) goto LAB_00cd9bb0;
LAB_00cd9b1c:
      if (param_1 != (uchar *)0x0) {
        memcpy(__dest,param_1,param_2);
      }
      if (*(int *)(this + 0xc0) == 4) {
        memset(__dest + param_2,0,(uVar16 - param_2) - 1);
        __dest[uVar6 - 1] = (uchar)(uVar16 - param_2);
      }
      else {
        if (*(int *)(this + 0xc0) == 2) {
          sVar11 = uVar16 - param_2;
          puVar9 = __dest + param_2;
          __n = sVar11;
        }
        else {
          __n = uVar16 + ~param_2;
          sVar11 = 0;
          puVar9 = __dest + param_2 + 1;
          __dest[param_2] = 0x80;
        }
        memset(puVar9,(int)sVar11,__n);
      }
      (**(code **)(**(long **)(this + 0xb8) + 0x48))(*(long **)(this + 0xb8),__dest,__dest,uVar16);
      plVar7 = (long *)(**(code **)(*(long *)this + 0x160))(this);
      lVar14 = *plVar7;
    }
  }
  else {
    uVar12 = (ulong)*(uint *)(this + 0xc4);
    uVar16 = 0;
    if (uVar12 != 0) {
      uVar16 = param_2 / uVar12;
    }
    uVar12 = param_2 - uVar16 * uVar12;
    plVar7 = (long *)(**(code **)(*(long *)this + 0x160))(this);
    uVar16 = (ulong)*(uint *)(this + 0xcc);
    local_70[0] = uVar16;
    if (*(ulong *)(this + 0xa8) < uVar16) {
      __dest = (uchar *)(**(code **)(*plVar7 + 0x128))(plVar7,&DEFAULT_CHANNEL,local_70);
      if (local_70[0] < uVar16) {
        uVar1 = *(ulong *)(this + 0xa8);
        __dest = *(uchar **)(this + 0xb0);
        if (uVar1 == uVar16) {
          *(undefined8 *)(this + 0xa0) = 0xffffffffffffffff;
          *(ulong *)(this + 0xa8) = uVar16;
        }
        else {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            __dest[uVar1 - 1] = '\0';
          }
          UnalignedDeallocate(__dest);
          __dest = (uchar *)UnalignedAllocate(uVar16);
          *(uchar **)(this + 0xb0) = __dest;
          *(undefined8 *)(this + 0xa0) = 0xffffffffffffffff;
          *(ulong *)(this + 0xa8) = uVar16;
        }
      }
    }
    else {
      __dest = *(uchar **)(this + 0xb0);
    }
    lVar14 = param_2 - uVar12;
    if (lVar14 != 0) {
      (**(code **)(**(long **)(this + 0xb8) + 0x48))(*(long **)(this + 0xb8),__dest,param_1,lVar14);
      plVar7 = (long *)(**(code **)(*(long *)this + 0x160))(this);
      (**(code **)(*plVar7 + 0x38))(plVar7,__dest,lVar14,0,1);
      puVar9 = param_1 + lVar14;
    }
    plVar7 = *(long **)(this + 0xb8);
    uVar16 = (ulong)*(uint *)(this + 0xcc);
    pcVar13 = *(code **)(*plVar7 + 0x50);
    if (uVar12 == 0) {
      puVar9 = (uchar *)0x0;
      uVar12 = 0;
    }
LAB_00cd99c8:
    uVar16 = (*pcVar13)(plVar7,__dest,uVar16,puVar9,uVar12);
    plVar7 = (long *)(**(code **)(*(long *)this + 0x160))(this);
    lVar14 = *plVar7;
  }
  (**(code **)(lVar14 + 0x38))(plVar7,__dest,uVar16,0,1);
LAB_00cd99fc:
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


