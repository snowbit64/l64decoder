// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BytecodeBuilder
// Entry Point: 00ef7fec
// Size: 368 bytes
// Signature: undefined __thiscall BytecodeBuilder(BytecodeBuilder * this, BytecodeEncoder * param_1)


/* Luau::BytecodeBuilder::BytecodeBuilder(Luau::BytecodeEncoder*) */

void __thiscall
Luau::BytecodeBuilder::BytecodeBuilder(BytecodeBuilder *this,BytecodeEncoder *param_1)

{
  void *pvVar1;
  
  *(undefined8 *)(this + 0xd8) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0x1a0) = 0xffffffff;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  this[0xb0] = (BytecodeBuilder)0x0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0x17c) = 0;
  *(undefined8 *)(this + 0x174) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(BytecodeEncoder **)(this + 0x240) = param_1;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined4 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x288) = 0;
                    /* try { // try from 00ef80e4 to 00ef813f has its CatchHandler @ 00ef815c */
  pvVar1 = operator_new(0x80);
  *(void **)(this + 0x20) = pvVar1;
  *(void **)(this + 0x28) = pvVar1;
  *(long *)(this + 0x30) = (long)pvVar1 + 0x80;
  pvVar1 = operator_new(0x80);
  *(void **)(this + 0x38) = pvVar1;
  *(void **)(this + 0x40) = pvVar1;
  *(long *)(this + 0x48) = (long)pvVar1 + 0x80;
  pvVar1 = operator_new(0x100);
  *(void **)(this + 0x50) = pvVar1;
  *(void **)(this + 0x58) = pvVar1;
  *(long *)(this + 0x60) = (long)pvVar1 + 0x100;
  pvVar1 = operator_new(0x40);
  *(void **)(this + 0x68) = pvVar1;
  *(void **)(this + 0x70) = pvVar1;
  *(long *)(this + 0x78) = (long)pvVar1 + 0x40;
  std::__ndk1::
  vector<Luau::BytecodeBuilder::Function,std::__ndk1::allocator<Luau::BytecodeBuilder::Function>>::
  reserve((vector<Luau::BytecodeBuilder::Function,std::__ndk1::allocator<Luau::BytecodeBuilder::Function>>
           *)this,8);
  return;
}


