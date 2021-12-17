#include "ColorItem.h"

void ColorItem::paint(QPainter *painter)
{
    painter->setRenderHint(QPainter::Antialiasing, true);
    painter->setBrush(QBrush(m_color));
    painter->setPen(Qt::NoPen);
    painter->drawEllipse(boundingRect());
}

ColorItem::ColorItem(QQuickItem *parent)
    :QQuickPaintedItem(parent), m_color{Qt::black}
{

}

QColor ColorItem::getColor() const
{
    return m_color;
}

void ColorItem::setColor(QColor &color)
{
    m_color=color;
    update();
    emit colorChanged(m_color);
}
