// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lerpUnclamped
// Entry Point: 0086d2a0
// Size: 496 bytes
// Signature: undefined __thiscall lerpUnclamped(ConditionalAnimationInformation * this, uint param_1, float param_2, float param_3)


/* ConditionalAnimationInformation::lerpUnclamped(unsigned int, float, float) */

void __thiscall
ConditionalAnimationInformation::lerpUnclamped
          (ConditionalAnimationInformation *this,uint param_1,float param_2,float param_3)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  pair pVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint *puVar7;
  ConditionalAnimationInformation **ppCVar8;
  ConditionalAnimationInformation **ppCVar9;
  ConditionalAnimationInformation **ppCVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  uint local_78 [2];
  uint auStack_70 [2];
  ConditionalAnimationValue aCStack_68 [8];
  uint local_60 [4];
  uint *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  ConditionalAnimationValue::ConditionalAnimationValue(aCStack_68);
  ConditionalAnimationValue::ConditionalAnimationValue
            ((ConditionalAnimationValue *)auStack_70,param_3);
  ConditionalAnimationValue::reset();
  ppCVar9 = (ConditionalAnimationInformation **)(this + 8);
  ppCVar10 = (ConditionalAnimationInformation **)*ppCVar9;
  ppCVar8 = ppCVar9;
  if (ppCVar10 != (ConditionalAnimationInformation **)0x0) {
    do {
      bVar2 = *(uint *)((long)ppCVar10 + 0x1c) < param_1;
      if (!bVar2) {
        ppCVar8 = ppCVar10;
      }
      ppCVar10 = (ConditionalAnimationInformation **)ppCVar10[bVar2];
    } while (ppCVar10 != (ConditionalAnimationInformation **)0x0);
    if ((ppCVar8 != ppCVar9) && (*(uint *)((long)ppCVar8 + 0x1c) <= param_1)) {
      ConditionalAnimationValue::operator=(aCStack_68,(ConditionalAnimationValue *)(ppCVar8 + 4));
      uVar5 = ConditionalAnimationValue::isFloat();
      if ((uVar5 & 1) != 0) {
        fVar11 = (float)ConditionalAnimationValue::getFloat();
        fVar12 = (float)ConditionalAnimationValue::getFloat();
        if (1e-06 <= ABS(fVar11 - fVar12)) {
          ConditionalAnimationValue::ConditionalAnimationValue
                    ((ConditionalAnimationValue *)local_78);
          uVar5 = ConditionalAnimationValue::isFloat();
          if (((uVar5 & 1) == 0) || (uVar5 = ConditionalAnimationValue::isFloat(), (uVar5 & 1) == 0)
             ) goto LAB_0086d42c;
          fVar11 = (float)ConditionalAnimationValue::getFloat();
          fVar12 = (float)ConditionalAnimationValue::getFloat();
          uVar13 = ConditionalAnimationValue::getFloat();
          fVar11 = (float)NEON_fmadd(fVar11 - fVar12,param_2,uVar13);
          ConditionalAnimationValue::setFloat((ConditionalAnimationValue *)local_78,fVar11);
          local_50 = local_60;
          local_60[0] = param_1;
          uVar3 = std::__ndk1::
                  __tree<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>>>
                  ::
                  __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>
                            ((uint *)this,(piecewise_construct_t *)local_60,(tuple *)&DAT_00518eb0,
                             (tuple *)&local_50);
          puVar7 = local_78;
        }
        else {
          local_50 = local_78;
          local_78[0] = param_1;
          uVar3 = std::__ndk1::
                  __tree<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>>>
                  ::
                  __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>
                            ((uint *)this,(piecewise_construct_t *)local_78,(tuple *)&DAT_00518eb0,
                             (tuple *)&local_50);
          puVar7 = auStack_70;
        }
        ConditionalAnimationValue::operator=
                  ((ConditionalAnimationValue *)((ulong)uVar3 + 0x20),
                   (ConditionalAnimationValue *)puVar7);
        uVar6 = 1;
        goto LAB_0086d464;
      }
    }
  }
LAB_0086d42c:
  local_50 = local_78;
  local_78[0] = param_1;
  pVar4 = std::__ndk1::
          __tree<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationValue>>>
          ::
          __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>
                    ((uint *)this,(piecewise_construct_t *)local_78,(tuple *)&DAT_00518eb0,
                     (tuple *)&local_50);
  ConditionalAnimationValue::operator=
            ((ConditionalAnimationValue *)((ulong)pVar4 + 0x20),
             (ConditionalAnimationValue *)auStack_70);
  uVar6 = 0;
LAB_0086d464:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


