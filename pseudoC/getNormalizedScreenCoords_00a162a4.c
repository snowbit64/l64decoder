// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNormalizedScreenCoords
// Entry Point: 00a162a4
// Size: 68 bytes
// Signature: undefined __thiscall getNormalizedScreenCoords(Renderer * this, int param_1, int param_2, Vector2 * param_3)


/* Renderer::getNormalizedScreenCoords(int, int, Vector2&) */

void __thiscall
Renderer::getNormalizedScreenCoords(Renderer *this,int param_1,int param_2,Vector2 *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  if (*(uint *)(this + 0x548) == 0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = 0.0;
    if (*(uint *)(this + 0x54c) != 0) {
      fVar1 = (float)param_1 / (float)(ulong)*(uint *)(this + 0x548);
      fVar2 = (float)param_2 / (float)(ulong)*(uint *)(this + 0x54c);
    }
  }
  *(float *)param_3 = fVar1;
  *(float *)(param_3 + 4) = fVar2;
  return;
}


