// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTime
// Entry Point: 00749488
// Size: 220 bytes
// Signature: undefined __thiscall setTime(Clip * this, float param_1, bool param_2)


/* Clip::setTime(float, bool) */

void __thiscall Clip::setTime(Clip *this,float param_1,bool param_2)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float __y;
  
  __y = *(float *)this;
  if (param_1 <= __y) {
    fVar3 = param_1;
    if (((param_1 < 0.0) && (fVar3 = 0.0, param_2)) && (fVar3 = fmodf(param_1,__y), fVar3 < 0.0)) {
      fVar3 = __y + fVar3;
    }
  }
  else {
    fVar3 = __y;
    if (param_2) {
      fVar3 = fmodf(param_1,__y);
    }
  }
  if (*(KeyframedTransformation ***)(this + 0x28) != *(KeyframedTransformation ***)(this + 0x20)) {
    KeyframedTransformation::setTime(**(KeyframedTransformation ***)(this + 0x20),fVar3,param_2,__y)
    ;
    lVar1 = *(long *)(this + 0x20);
    if (8 < (ulong)(*(long *)(this + 0x28) - lVar1)) {
      uVar2 = 1;
      do {
        KeyframedTransformation::setTime
                  (*(KeyframedTransformation **)(lVar1 + uVar2 * 8),fVar3,param_2,*(float *)this);
        lVar1 = *(long *)(this + 0x20);
        uVar2 = (ulong)((int)uVar2 + 1);
      } while (uVar2 < (ulong)(*(long *)(this + 0x28) - lVar1 >> 3));
    }
  }
  return;
}


