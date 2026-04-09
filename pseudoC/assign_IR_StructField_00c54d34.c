// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assign<IR_StructField*>
// Entry Point: 00c54d34
// Size: 476 bytes
// Signature: type __thiscall assign<IR_StructField*>(vector<IR_StructField,std::__ndk1::allocator<IR_StructField>> * this, IR_StructField * param_1, IR_StructField * param_2)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<IR_StructField*>::value&&is_constructible<IR_StructField,
   std::__ndk1::iterator_traits<IR_StructField*>::reference>::value, void>::type
   std::__ndk1::vector<IR_StructField, std::__ndk1::allocator<IR_StructField>
   >::assign<IR_StructField*>(IR_StructField*, IR_StructField*) */

type __thiscall
std::__ndk1::vector<IR_StructField,std::__ndk1::allocator<IR_StructField>>::assign<IR_StructField*>
          (vector<IR_StructField,std::__ndk1::allocator<IR_StructField>> *this,
          IR_StructField *param_1,IR_StructField *param_2)

{
  IR_StructField *__src;
  type tVar1;
  void *pvVar2;
  vector<IR_StructField,std::__ndk1::allocator<IR_StructField>> *pvVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  size_t sVar7;
  void *pvVar8;
  ulong uVar9;
  
  lVar4 = *(long *)(this + 0x10);
  pvVar8 = *(void **)this;
  sVar7 = (long)param_2 - (long)param_1;
  lVar6 = lVar4 - (long)pvVar8 >> 3;
  uVar9 = ((long)sVar7 >> 3) * 0x6db6db6db6db6db7;
  if (uVar9 < (ulong)(lVar6 * 0x6db6db6db6db6db7) || uVar9 + lVar6 * -0x6db6db6db6db6db7 == 0) {
    lVar4 = *(long *)(this + 8) - (long)pvVar8 >> 3;
    __src = param_1 + (*(long *)(this + 8) - (long)pvVar8);
    if (uVar9 < (ulong)(lVar4 * 0x6db6db6db6db6db7) || uVar9 + lVar4 * -0x6db6db6db6db6db7 == 0) {
      __src = param_2;
    }
    sVar7 = (long)__src - (long)param_1;
    pvVar3 = this;
    if (sVar7 != 0) {
      pvVar3 = (vector<IR_StructField,std::__ndk1::allocator<IR_StructField>> *)
               memmove(pvVar8,param_1,sVar7);
    }
    tVar1 = (type)pvVar3;
    if (uVar9 < (ulong)(lVar4 * 0x6db6db6db6db6db7) || uVar9 + lVar4 * -0x6db6db6db6db6db7 == 0) {
      *(size_t *)(this + 8) = (long)pvVar8 + sVar7;
    }
    else {
      pvVar8 = *(void **)(this + 8);
      sVar7 = (long)param_2 - (long)__src;
      if (0 < (long)sVar7) {
        pvVar2 = memcpy(pvVar8,__src,sVar7);
        tVar1 = (type)pvVar2;
        pvVar8 = (void *)((long)pvVar8 + (sVar7 / 0x38) * 0x38);
      }
      *(void **)(this + 8) = pvVar8;
    }
    return tVar1;
  }
  if (pvVar8 != (void *)0x0) {
    *(void **)(this + 8) = pvVar8;
    operator_delete(pvVar8);
    lVar4 = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (uVar9 < 0x492492492492493) {
    uVar5 = (lVar4 >> 3) * -0x2492492492492492;
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    if (0x249249249249248 < (ulong)((lVar4 >> 3) * 0x6db6db6db6db6db7)) {
      uVar9 = 0x492492492492492;
    }
    if (uVar9 < 0x492492492492493) {
      pvVar2 = operator_new(uVar9 * 0x38);
      *(void **)this = pvVar2;
      *(void **)(this + 8) = pvVar2;
      *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar9 * 0x38);
      pvVar8 = pvVar2;
      if (0 < (long)sVar7) {
        pvVar8 = memcpy(pvVar2,param_1,sVar7);
        pvVar2 = (void *)((long)pvVar2 + (sVar7 / 0x38) * 0x38);
      }
      *(void **)(this + 8) = pvVar2;
      return (type)pvVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_length_error();
}


