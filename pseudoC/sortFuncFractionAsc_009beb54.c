// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sortFuncFractionAsc
// Entry Point: 009beb54
// Size: 20 bytes
// Signature: undefined __cdecl sortFuncFractionAsc(HitData * param_1, HitData * param_2)


/* Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData::sortFuncFractionAsc(Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData
   const&, Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData const&) */

bool Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData::sortFuncFractionAsc
               (HitData *param_1,HitData *param_2)

{
  return *(float *)(param_1 + 0x18) < *(float *)(param_2 + 0x18);
}


