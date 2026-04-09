// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator+=
// Entry Point: 00a0dcfc
// Size: 188 bytes
// Signature: undefined __thiscall operator+=(RenderStats * this, RenderStats * param_1)


/* RenderStats::TEMPNAMEPLACEHOLDERVALUE(RenderStats const&) */

void __thiscall RenderStats::operator+=(RenderStats *this,RenderStats *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_1;
  *(ulong *)(this + 8) =
       CONCAT44((int)((ulong)*(undefined8 *)(this + 8) >> 0x20) +
                (int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20),
                (int)*(undefined8 *)(this + 8) + (int)*(undefined8 *)(param_1 + 8));
  *(ulong *)this =
       CONCAT44((int)((ulong)*(undefined8 *)this >> 0x20) + (int)((ulong)uVar2 >> 0x20),
                (int)*(undefined8 *)this + (int)uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(ulong *)(this + 0x18) =
       CONCAT44((int)((ulong)*(undefined8 *)(this + 0x18) >> 0x20) +
                (int)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20),
                (int)*(undefined8 *)(this + 0x18) + (int)*(undefined8 *)(param_1 + 0x18));
  *(ulong *)(this + 0x10) =
       CONCAT44((int)((ulong)*(undefined8 *)(this + 0x10) >> 0x20) + (int)((ulong)uVar2 >> 0x20),
                (int)*(undefined8 *)(this + 0x10) + (int)uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(ulong *)(this + 0x28) =
       CONCAT44((int)((ulong)*(undefined8 *)(this + 0x28) >> 0x20) +
                (int)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20),
                (int)*(undefined8 *)(this + 0x28) + (int)*(undefined8 *)(param_1 + 0x28));
  *(ulong *)(this + 0x20) =
       CONCAT44((int)((ulong)*(undefined8 *)(this + 0x20) >> 0x20) + (int)((ulong)uVar2 >> 0x20),
                (int)*(undefined8 *)(this + 0x20) + (int)uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(ulong *)(this + 0x38) =
       CONCAT44((int)((ulong)*(undefined8 *)(this + 0x38) >> 0x20) +
                (int)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20),
                (int)*(undefined8 *)(this + 0x38) + (int)*(undefined8 *)(param_1 + 0x38));
  *(ulong *)(this + 0x30) =
       CONCAT44((int)((ulong)*(undefined8 *)(this + 0x30) >> 0x20) + (int)((ulong)uVar2 >> 0x20),
                (int)*(undefined8 *)(this + 0x30) + (int)uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(ulong *)(this + 0x48) =
       CONCAT44((int)((ulong)*(undefined8 *)(this + 0x48) >> 0x20) +
                (int)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20),
                (int)*(undefined8 *)(this + 0x48) + (int)*(undefined8 *)(param_1 + 0x48));
  *(ulong *)(this + 0x40) =
       CONCAT44((int)((ulong)*(undefined8 *)(this + 0x40) >> 0x20) + (int)((ulong)uVar2 >> 0x20),
                (int)*(undefined8 *)(this + 0x40) + (int)uVar2);
  *(ulong *)(this + 0x50) =
       CONCAT44((int)((ulong)*(undefined8 *)(this + 0x50) >> 0x20) +
                (int)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20),
                (int)*(undefined8 *)(this + 0x50) + (int)*(undefined8 *)(param_1 + 0x50));
  uVar1 = *(uint *)(param_1 + 0x58);
  if (*(uint *)(param_1 + 0x58) <= *(uint *)(this + 0x58)) {
    uVar1 = *(uint *)(this + 0x58);
  }
  *(uint *)(this + 0x58) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x5c);
  *(ulong *)(this + 100) =
       CONCAT44((int)((ulong)*(undefined8 *)(this + 100) >> 0x20) +
                (int)((ulong)*(undefined8 *)(param_1 + 100) >> 0x20),
                (int)*(undefined8 *)(this + 100) + (int)*(undefined8 *)(param_1 + 100));
  *(ulong *)(this + 0x5c) =
       CONCAT44((int)((ulong)*(undefined8 *)(this + 0x5c) >> 0x20) + (int)((ulong)uVar2 >> 0x20),
                (int)*(undefined8 *)(this + 0x5c) + (int)uVar2);
  *(int *)(this + 0x6c) = *(int *)(this + 0x6c) + *(int *)(param_1 + 0x6c);
  *(int *)(this + 0x70) = *(int *)(this + 0x70) + *(int *)(param_1 + 0x70);
  *(int *)(this + 0x74) = *(int *)(this + 0x74) + *(int *)(param_1 + 0x74);
  uVar1 = *(uint *)(param_1 + 0x78);
  if (*(uint *)(param_1 + 0x78) <= *(uint *)(this + 0x78)) {
    uVar1 = *(uint *)(this + 0x78);
  }
  *(uint *)(this + 0x78) = uVar1;
  return;
}


