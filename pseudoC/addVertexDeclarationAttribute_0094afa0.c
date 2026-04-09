// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addVertexDeclarationAttribute
// Entry Point: 0094afa0
// Size: 656 bytes
// Signature: undefined __thiscall addVertexDeclarationAttribute(CustomShader * this, char * param_1, char * param_2, bool param_3)


/* CustomShader::addVertexDeclarationAttribute(char const*, char const*, bool) */

void __thiscall
CustomShader::addVertexDeclarationAttribute
          (CustomShader *this,char *param_1,char *param_2,bool param_3)

{
  long lVar1;
  int iVar2;
  size_t __n;
  undefined4 uVar3;
  undefined4 *puVar4;
  long *plVar5;
  void *__dest;
  ulong uVar6;
  undefined8 local_90;
  size_t sStack_88;
  void *local_80;
  undefined4 local_78 [2];
  ulong local_70;
  size_t sStack_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = 0;
  sStack_68 = 0;
  local_60 = (void *)0x0;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0094b224 to 0094b22b has its CatchHandler @ 0094b244 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_90 | 1);
    local_90 = CONCAT71(local_90._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_0094b034;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0094b01c to 0094b023 has its CatchHandler @ 0094b244 */
    __dest = operator_new(uVar6);
    local_90 = uVar6 | 1;
    sStack_88 = __n;
    local_80 = __dest;
LAB_0094b034:
    memcpy(__dest,param_2,__n);
  }
  *(undefined *)((long)__dest + __n) = 0;
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  local_78[0] = 0;
  sStack_68 = sStack_88;
  local_70 = local_90;
  local_60 = local_80;
  iVar2 = strcasecmp(param_1,"uv0");
  if (iVar2 == 0) {
    uVar3 = 0x20;
    local_78[0] = uVar3;
  }
  else {
    iVar2 = strcasecmp(param_1,"uv1");
    if (iVar2 == 0) {
      uVar3 = 0x40;
      local_78[0] = uVar3;
    }
    else {
      iVar2 = strcasecmp(param_1,"uv2");
      if (iVar2 == 0) {
        uVar3 = 0x80;
        local_78[0] = uVar3;
      }
      else {
        iVar2 = strcasecmp(param_1,"uv3");
        if (iVar2 == 0) {
          uVar3 = 0x100;
          local_78[0] = uVar3;
        }
        else {
          iVar2 = strcasecmp(param_1,"color");
          if (iVar2 == 0) {
            uVar3 = 8;
            local_78[0] = uVar3;
          }
          else {
            iVar2 = strcasecmp(param_1,"blendweights");
            if (iVar2 == 0) {
              uVar3 = 2;
              local_78[0] = uVar3;
            }
            else {
              iVar2 = strcasecmp(param_1,"tangent");
              if (iVar2 == 0) {
                uVar3 = 0x200;
                local_78[0] = uVar3;
              }
              else {
                iVar2 = strcasecmp(param_1,"normal");
                if (iVar2 == 0) {
                  uVar3 = 4;
                  local_78[0] = uVar3;
                }
                else {
                  iVar2 = strcasecmp(param_1,"position");
                  if (iVar2 == 0) {
                    uVar3 = 1;
                    local_78[0] = uVar3;
                  }
                  else {
                    uVar3 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (param_3) {
    puVar4 = *(undefined4 **)(this + 0x148);
    if (puVar4 == *(undefined4 **)(this + 0x150)) {
                    /* try { // try from 0094b1d0 to 0094b1e7 has its CatchHandler @ 0094b240 */
      std::__ndk1::
      vector<CustomShader::VertexDeclarationAttribute,std::__ndk1::allocator<CustomShader::VertexDeclarationAttribute>>
      ::__push_back_slow_path<CustomShader::VertexDeclarationAttribute_const&>
                ((vector<CustomShader::VertexDeclarationAttribute,std::__ndk1::allocator<CustomShader::VertexDeclarationAttribute>>
                  *)(this + 0x140),(VertexDeclarationAttribute *)local_78);
      goto LAB_0094b1e8;
    }
    plVar5 = (long *)(this + 0x148);
    *puVar4 = uVar3;
                    /* try { // try from 0094b194 to 0094b19b has its CatchHandler @ 0094b234 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(puVar4 + 2);
  }
  else {
    puVar4 = *(undefined4 **)(this + 0x130);
    if (puVar4 == *(undefined4 **)(this + 0x138)) {
      std::__ndk1::
      vector<CustomShader::VertexDeclarationAttribute,std::__ndk1::allocator<CustomShader::VertexDeclarationAttribute>>
      ::__push_back_slow_path<CustomShader::VertexDeclarationAttribute_const&>
                ((vector<CustomShader::VertexDeclarationAttribute,std::__ndk1::allocator<CustomShader::VertexDeclarationAttribute>>
                  *)(this + 0x128),(VertexDeclarationAttribute *)local_78);
      goto LAB_0094b1e8;
    }
    plVar5 = (long *)(this + 0x130);
    *puVar4 = uVar3;
                    /* try { // try from 0094b1b8 to 0094b1bf has its CatchHandler @ 0094b230 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(puVar4 + 2);
  }
  *plVar5 = (long)(puVar4 + 8);
LAB_0094b1e8:
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


