#ifndef COLORITEM_H
#define COLORITEM_H
#include <QPainter>
#include <QQuickPaintedItem>


class ColorItem : public QQuickPaintedItem
{
    Q_OBJECT
private:
    Q_PROPERTY(QColor color READ getColor
               WRITE setColor
               NOTIFY colorChanged)
    QColor m_color;
protected:
    virtual void paint(QPainter *painter)override;
public:
    ColorItem(QQuickItem* parent=nullptr);
    QColor getColor()const;
    void setColor(QColor& color);
signals:
    void colorChanged(const QColor& color);
};

#endif // COLORITEM_H
