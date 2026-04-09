// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assign<IR_RegisterSet::RegisterInfo*>
// Entry Point: 00c2a100
// Size: 576 bytes
// Signature: type __thiscall assign<IR_RegisterSet::RegisterInfo*>(vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>> * this, RegisterInfo * param_1, RegisterInfo * param_2)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<IR_RegisterSet::RegisterInfo*>::value&&is_constructible<IR_RegisterSet::RegisterInfo,
   std::__ndk1::iterator_traits<IR_RegisterSet::RegisterInfo*>::reference>::value, void>::type
   std::__ndk1::vector<IR_RegisterSet::RegisterInfo,
   std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>
   >::assign<IR_RegisterSet::RegisterInfo*>(IR_RegisterSet::RegisterInfo*,
   IR_RegisterSet::RegisterInfo*) */

type __thiscall
std::__ndk1::
vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>::
assign<IR_RegisterSet::RegisterInfo*>
          (vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
           *this,RegisterInfo *param_1,RegisterInfo *param_2)

{
  undefined8 *puVar1;
  type tVar2;
  vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>> *pvVar3;
  long lVar4;
  vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>> *pvVar5;
  vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>> *pvVar6;
  ulong uVar7;
  long lVar8;
  vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>> *pvVar9;
  vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>> *pvVar10
  ;
  ulong uVar11;
  
  lVar4 = *(long *)(this + 0x10);
  pvVar10 = *(vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
              **)this;
  lVar8 = lVar4 - (long)pvVar10 >> 3;
  uVar11 = ((long)param_2 - (long)param_1 >> 3) * -0x3333333333333333;
  if (uVar11 < (ulong)(lVar8 * -0x3333333333333333) || uVar11 + lVar8 * 0x3333333333333333 == 0) {
    lVar4 = *(long *)(this + 8) - (long)pvVar10 >> 3;
    pvVar9 = (vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
              *)(param_1 + (*(long *)(this + 8) - (long)pvVar10));
    pvVar5 = pvVar9;
    if (uVar11 < (ulong)(lVar4 * -0x3333333333333333) || uVar11 + lVar4 * 0x3333333333333333 == 0) {
      pvVar5 = (vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
                *)param_2;
    }
    pvVar3 = this;
    if (pvVar5 != (vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
                   *)param_1) {
      do {
        *pvVar10 = *(vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
                     *)param_1;
        pvVar3 = (vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
                  *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               *)(pvVar10 + 8),
                              (basic_string *)
                              ((vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
                                *)param_1 + 8));
        puVar1 = (undefined8 *)
                 ((vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
                   *)param_1 + 0x20);
        param_1 = (RegisterInfo *)
                  ((vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
                    *)param_1 + 0x28);
        *(undefined8 *)(pvVar10 + 0x20) = *puVar1;
        pvVar10 = pvVar10 + 0x28;
      } while (param_1 != (RegisterInfo *)pvVar5);
    }
    tVar2 = (type)pvVar3;
    pvVar6 = *(vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
               **)(this + 8);
    if (uVar11 < (ulong)(lVar4 * -0x3333333333333333) || uVar11 + lVar4 * 0x3333333333333333 == 0) {
      while (pvVar6 != pvVar10) {
        if (((byte)pvVar6[-0x20] & 1) != 0) {
          pvVar3 = *(vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
                     **)(pvVar6 + -0x10);
          operator_delete(pvVar3);
        }
        tVar2 = (type)pvVar3;
        pvVar6 = pvVar6 + -0x28;
      }
      *(vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>> **
       )(this + 8) = pvVar10;
      return tVar2;
    }
    if (pvVar5 == (vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
                   *)param_2) goto LAB_00c2a31c;
    do {
      pvVar10 = pvVar6;
      *pvVar10 = *pvVar9;
                    /* try { // try from 00c2a204 to 00c2a20f has its CatchHandler @ 00c2a340 */
      pvVar3 = (vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
                *)std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string((basic_string *)(pvVar10 + 8));
      puVar1 = (undefined8 *)(pvVar9 + 0x20);
      pvVar9 = pvVar9 + 0x28;
      *(undefined8 *)(pvVar10 + 0x20) = *puVar1;
      pvVar6 = pvVar10 + 0x28;
    } while (pvVar9 != (vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
                        *)param_2);
  }
  else {
    if (pvVar10 !=
        (vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>> *
        )0x0) {
      pvVar9 = pvVar10;
      pvVar5 = *(vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
                 **)(this + 8);
      if (*(vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
            **)(this + 8) != pvVar10) {
        do {
          pvVar9 = pvVar5 + -0x28;
          if (((byte)pvVar5[-0x20] & 1) != 0) {
            operator_delete(*(void **)(pvVar5 + -0x10));
          }
          pvVar5 = pvVar9;
        } while (pvVar9 != pvVar10);
        pvVar9 = *(vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
                   **)this;
      }
      *(vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>> **
       )(this + 8) = pvVar10;
      operator_delete(pvVar9);
      lVar4 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (0x666666666666666 < uVar11) {
LAB_00c2a338:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar7 = (lVar4 >> 3) * -0x6666666666666666;
    if (uVar11 <= uVar7) {
      uVar11 = uVar7;
    }
    if (0x333333333333332 < (ulong)((lVar4 >> 3) * -0x3333333333333333)) {
      uVar11 = 0x666666666666666;
    }
    if (0x666666666666666 < uVar11) goto LAB_00c2a338;
    pvVar3 = (vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
              *)operator_new(uVar11 * 0x28);
    *(vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>> **)
     this = pvVar3;
    *(vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>> **)
     (this + 8) = pvVar3;
    *(vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>> **)
     (this + 0x10) = pvVar3 + uVar11 * 0x28;
    pvVar9 = pvVar3;
    pvVar6 = pvVar3;
    if (param_1 == param_2) goto LAB_00c2a31c;
    do {
      pvVar10 = pvVar9;
      *pvVar10 = *(vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
                   *)param_1;
                    /* try { // try from 00c2a2f4 to 00c2a2ff has its CatchHandler @ 00c2a348 */
      pvVar3 = (vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
                *)std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string((basic_string *)(pvVar10 + 8));
      puVar1 = (undefined8 *)
               ((vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
                 *)param_1 + 0x20);
      param_1 = (RegisterInfo *)
                ((vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
                  *)param_1 + 0x28);
      *(undefined8 *)(pvVar10 + 0x20) = *puVar1;
      pvVar9 = pvVar10 + 0x28;
    } while (param_1 != param_2);
  }
  pvVar6 = pvVar10 + 0x28;
LAB_00c2a31c:
  *(vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>> **)
   (this + 8) = pvVar6;
  return (type)pvVar3;
}


