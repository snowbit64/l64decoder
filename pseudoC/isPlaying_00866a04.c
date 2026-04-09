// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isPlaying
// Entry Point: 00866a04
// Size: 192 bytes
// Signature: undefined __thiscall isPlaying(ConditionalAnimationTracks * this, Track * param_1)


/* ConditionalAnimationTracks::isPlaying(ConditionalAnimationTracks::Track const&) const */

bool __thiscall
ConditionalAnimationTracks::isPlaying(ConditionalAnimationTracks *this,Track *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)param_1;
  iVar2 = *(int *)(param_1 + 4);
  if ((*(int *)this == iVar1) && (*(int *)(this + 4) == iVar2)) {
    return true;
  }
  if ((*(int *)(this + 8) == iVar1) && (*(int *)(this + 0xc) == iVar2)) {
    return true;
  }
  if ((*(int *)(this + 0x10) == iVar1) && (*(int *)(this + 0x14) == iVar2)) {
    return true;
  }
  if ((*(int *)(this + 0x18) == iVar1) && (*(int *)(this + 0x1c) == iVar2)) {
    return true;
  }
  if ((*(int *)(this + 0x20) == iVar1) && (*(int *)(this + 0x24) == iVar2)) {
    return true;
  }
  return *(int *)(this + 0x28) == iVar1 && *(int *)(this + 0x2c) == iVar2;
}


