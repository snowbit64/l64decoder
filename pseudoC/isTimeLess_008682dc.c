// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isTimeLess
// Entry Point: 008682dc
// Size: 20 bytes
// Signature: undefined __cdecl isTimeLess(RunningCallbackInfo * param_1, RunningCallbackInfo * param_2)


/* ConditionalAnimationItem::RunningCallbackInfo::isTimeLess(ConditionalAnimationItem::RunningCallbackInfo
   const&, ConditionalAnimationItem::RunningCallbackInfo const&) */

bool ConditionalAnimationItem::RunningCallbackInfo::isTimeLess
               (RunningCallbackInfo *param_1,RunningCallbackInfo *param_2)

{
  return *(float *)param_1 < *(float *)param_2;
}


