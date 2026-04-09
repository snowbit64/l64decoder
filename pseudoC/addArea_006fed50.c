// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addArea
// Entry Point: 006fed50
// Size: 248 bytes
// Signature: undefined __thiscall addArea(AnimalHusbandry * this, AREA_TYPE param_1, Vector3 * param_2, float param_3, Vector2 * param_4)


/* AnimalHusbandry::addArea(AnimalHusbandry::AREA_TYPE, Vector3 const&, float, Vector2 const&) */

void __thiscall
AnimalHusbandry::addArea
          (AnimalHusbandry *this,AREA_TYPE param_1,Vector3 *param_2,float param_3,Vector2 *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_78;
  float fStack_74;
  int local_70;
  AREA_TYPE AStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar5 = *(float *)param_2;
  fVar6 = *(float *)(param_2 + 8);
  sincosf(param_3,&fStack_74,&local_78);
  fVar4 = local_78 * *(float *)param_4;
  fVar2 = fStack_74 * *(float *)param_4;
  local_70 = *(int *)(this + 0x1fd10);
  local_78 = local_78 * *(float *)(param_4 + 4);
  fVar3 = *(float *)(param_4 + 4) * -fStack_74;
  local_50 = fVar5 - fVar4;
  fStack_4c = fVar6 - fVar2;
  fVar5 = fVar5 + fVar4;
  fVar6 = fVar6 + fVar2;
  local_68 = local_50 - fVar3;
  fStack_64 = fStack_4c - local_78;
  local_60 = fVar5 - fVar3;
  *(int *)(this + 0x1fd10) = local_70 + 1;
  fStack_5c = fVar6 - local_78;
  local_58 = fVar5 + fVar3;
  fStack_54 = fVar6 + local_78;
  local_50 = local_50 + fVar3;
  fStack_4c = fStack_4c + local_78;
  AStack_6c = param_1;
  FUN_006fee48(this + 0x1fc30,&local_70);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_70);
}


