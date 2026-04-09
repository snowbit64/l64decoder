// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 008c2178
// Size: 240 bytes
// Signature: undefined __thiscall init(CullingManager * this, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, uint param_7, uint param_8, uint param_9, uint param_10, float * param_11, uint param_12)


/* CullingManager::init(float, float, float, float, float, float, unsigned int, unsigned int,
   unsigned int, unsigned int, float*, unsigned int) */

void __thiscall
CullingManager::init
          (CullingManager *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,uint param_7,uint param_8,uint param_9,uint param_10,
          float *param_11,uint param_12)

{
  CullingGrid2D::setWorldProperties
            ((CullingGrid2D *)(this + 0x40),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
             param_10,param_11);
  CullingGrid2D::setWorldProperties
            ((CullingGrid2D *)(this + 0x80),param_1,param_2,param_3,param_4,param_5,param_6,param_8,
             param_10,param_11);
  CullingGrid2D::setWorldProperties
            ((CullingGrid2D *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_9,param_10,
             param_11);
  DecalCullingStructure::setWorldProperties
            ((DecalCullingStructure *)(this + 0xd8),param_1,param_3,param_4,param_6,param_12);
  return;
}


