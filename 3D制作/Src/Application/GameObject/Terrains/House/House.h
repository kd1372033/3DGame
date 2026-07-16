#pragma once

class House : public KdGameObject
{
public:
	House() { Init(); }
	~House() {}

	void Update()	override;
	void DrawLit()	override;

private:
	void Init()		override;

	std::shared_ptr<KdModelWork> m_spModel;
};

